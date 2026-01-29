// Bare-metal test program for Warp SIMT Vector Engine
// Demonstrates usage of the Warp accelerator via RoCC interface

#include <stdio.h>
#include <stdint.h>

// RoCC instruction macros for Warp accelerator
// Using custom0 opcode space

// Warp RoCC opcodes (funct7 field)
#define WARP_KERNEL_START 0
#define WARP_SET_MASK     1
#define WARP_GET_STATUS   2

// RoCC instruction format: .insn r opcode, func3, func7, rd, rs1, rs2
#define ROCC_INSTRUCTION(rd, rs1, rs2, funct) \
    asm volatile ( \
        ".insn r 0x0b, 0, %[f7], %[d], %[s1], %[s2]" \
        : [d] "=r"(rd) \
        : [s1] "r"(rs1), [s2] "r"(rs2), [f7] "i"(funct) \
    )

// Warp accelerator functions

// Set the warp mask (enables/disables lanes)
static inline void warp_set_mask(uint32_t mask) {
    uint32_t dummy = 0;
    ROCC_INSTRUCTION(dummy, mask, 0, WARP_SET_MASK);
}

// Start kernel execution
// kernel_addr: pointer to kernel instructions in memory
// kernel_length: number of instructions
static inline void warp_kernel_start(uint32_t kernel_addr, uint16_t kernel_length) {
    uint32_t dummy = 0;
    ROCC_INSTRUCTION(dummy, kernel_addr, kernel_length, WARP_KERNEL_START);
}

// Get accelerator status
static inline uint32_t warp_get_status(void) {
    uint32_t status = 0;
    ROCC_INSTRUCTION(status, 0, 0, WARP_GET_STATUS);
    return status;
}

// Warp instruction format (32-bit)
// [opcode:4][dst:5][src1:5][src2:5][imm:13]
typedef struct {
    uint32_t imm    : 13;
    uint32_t src2   : 5;
    uint32_t src1   : 5;
    uint32_t dst    : 5;
    uint32_t opcode : 4;
} warp_instruction_t;

// Warp opcodes
#define WARP_OP_ADD   0
#define WARP_OP_MUL   1
#define WARP_OP_FMA   2
#define WARP_OP_MAX   3
#define WARP_OP_RELU  4
#define WARP_OP_LOAD  5
#define WARP_OP_STORE 6

// Helper to create warp instruction
static inline uint32_t make_warp_inst(uint8_t opcode, uint8_t dst, 
                                       uint8_t src1, uint8_t src2, uint16_t imm) {
    warp_instruction_t inst = {
        .opcode = opcode,
        .dst = dst,
        .src1 = src1,
        .src2 = src2,
        .imm = imm & 0x1FFF  // 13-bit immediate
    };
    return *(uint32_t*)&inst;
}

// Test kernel stored in memory
__attribute__((aligned(16)))
uint32_t test_kernel[16];

void test_simple_add(void) {
    printf("\n=== Test 1: Simple Vector Addition ===\n");
    
    // Create kernel: R3 = R1 + R2
    // R1 = 10, R2 = 20, R3 should be 30 for each lane
    test_kernel[0] = make_warp_inst(WARP_OP_ADD, 1, 0, 0, 10);  // R1 = 0 + 10
    test_kernel[1] = make_warp_inst(WARP_OP_ADD, 2, 0, 0, 20);  // R2 = 0 + 20
    test_kernel[2] = make_warp_inst(WARP_OP_ADD, 3, 1, 2, 0);   // R3 = R1 + R2
    
    // Enable all 8 lanes
    printf("Setting mask to enable all lanes (0xFF)\n");
    warp_set_mask(0xFF);
    
    // Start kernel with 3 instructions
    printf("Starting kernel at address 0x%08X with 3 instructions\n", 
           (uint32_t)test_kernel);
    warp_kernel_start((uint32_t)test_kernel, 3);
    
    // Wait for completion and check status
    uint32_t status;
    int timeout = 1000;
    do {
        status = warp_get_status();
        timeout--;
    } while (!(status & 0x4) && timeout > 0);  // Wait for done bit
    
    if (timeout > 0) {
        printf("Kernel completed successfully!\n");
        printf("Status: 0x%08X\n", status);
    } else {
        printf("ERROR: Kernel execution timeout!\n");
    }
}

void test_multiply(void) {
    printf("\n=== Test 2: Vector Multiplication ===\n");
    
    // Create kernel: R3 = R1 * R2
    // R1 = 5, R2 = 6, R3 should be 30 for each lane
    test_kernel[0] = make_warp_inst(WARP_OP_ADD, 1, 0, 0, 5);   // R1 = 5
    test_kernel[1] = make_warp_inst(WARP_OP_ADD, 2, 0, 0, 6);   // R2 = 6
    test_kernel[2] = make_warp_inst(WARP_OP_MUL, 3, 1, 2, 0);   // R3 = R1 * R2
    
    printf("Starting multiplication kernel\n");
    warp_kernel_start((uint32_t)test_kernel, 3);
    
    // Wait for completion
    uint32_t status;
    int timeout = 1000;
    do {
        status = warp_get_status();
        timeout--;
    } while (!(status & 0x4) && timeout > 0);
    
    if (timeout > 0) {
        printf("Multiplication completed!\n");
    } else {
        printf("ERROR: Multiplication timeout!\n");
    }
}

void test_fma(void) {
    printf("\n=== Test 3: Fused Multiply-Add (FMA) ===\n");
    
    // Create kernel: R4 = (R1 * R2) + R3
    // R1 = 2, R2 = 3, R3 = 4, R4 should be 10 for each lane
    test_kernel[0] = make_warp_inst(WARP_OP_ADD, 1, 0, 0, 2);   // R1 = 2
    test_kernel[1] = make_warp_inst(WARP_OP_ADD, 2, 0, 0, 3);   // R2 = 3
    test_kernel[2] = make_warp_inst(WARP_OP_ADD, 3, 0, 0, 4);   // R3 = 4
    test_kernel[3] = make_warp_inst(WARP_OP_FMA, 4, 1, 2, 0);   // R4 = (R1*R2)+imm(R3)
    
    printf("Starting FMA kernel\n");
    warp_kernel_start((uint32_t)test_kernel, 4);
    
    // Wait for completion
    uint32_t status;
    int timeout = 1000;
    do {
        status = warp_get_status();
        timeout--;
    } while (!(status & 0x4) && timeout > 0);
    
    if (timeout > 0) {
        printf("FMA completed!\n");
    } else {
        printf("ERROR: FMA timeout!\n");
    }
}

void test_max_relu(void) {
    printf("\n=== Test 4: MAX and RELU Operations ===\n");
    
    // Test MAX and RELU
    test_kernel[0] = make_warp_inst(WARP_OP_ADD, 1, 0, 0, 15);  // R1 = 15
    test_kernel[1] = make_warp_inst(WARP_OP_ADD, 2, 0, 0, 25);  // R2 = 25
    test_kernel[2] = make_warp_inst(WARP_OP_MAX, 3, 1, 2, 0);   // R3 = MAX(R1, R2) = 25
    test_kernel[3] = make_warp_inst(WARP_OP_RELU, 4, 1, 0, 0);  // R4 = RELU(R1) = 15
    
    printf("Starting MAX/RELU kernel\n");
    warp_kernel_start((uint32_t)test_kernel, 4);
    
    // Wait for completion
    uint32_t status;
    int timeout = 1000;
    do {
        status = warp_get_status();
        timeout--;
    } while (!(status & 0x4) && timeout > 0);
    
    if (timeout > 0) {
        printf("MAX/RELU completed!\n");
    } else {
        printf("ERROR: MAX/RELU timeout!\n");
    }
}

void test_masked_execution(void) {
    printf("\n=== Test 5: Masked Execution (Predication) ===\n");
    
    // Test with only half the lanes enabled
    // Create simple ADD kernel
    test_kernel[0] = make_warp_inst(WARP_OP_ADD, 1, 0, 0, 100); // R1 = 100
    test_kernel[1] = make_warp_inst(WARP_OP_ADD, 2, 0, 0, 200); // R2 = 200
    test_kernel[2] = make_warp_inst(WARP_OP_ADD, 3, 1, 2, 0);   // R3 = R1 + R2
    
    // Enable only lanes 0, 1, 2, 3 (mask = 0x0F)
    printf("Setting mask to enable only first 4 lanes (0x0F)\n");
    warp_set_mask(0x0F);
    
    printf("Starting masked kernel\n");
    warp_kernel_start((uint32_t)test_kernel, 3);
    
    // Wait for completion
    uint32_t status;
    int timeout = 1000;
    do {
        status = warp_get_status();
        timeout--;
    } while (!(status & 0x4) && timeout > 0);
    
    if (timeout > 0) {
        printf("Masked execution completed!\n");
        printf("Note: Only lanes 0-3 should have executed\n");
    } else {
        printf("ERROR: Masked execution timeout!\n");
    }
    
    // Restore full mask
    warp_set_mask(0xFF);
}

int main(void) {
    printf("\n");
    printf("==========================================\n");
    printf(" Warp SIMT Vector Engine Test Program    \n");
    printf("==========================================\n");
    printf("Testing Warp accelerator via RoCC interface\n");
    printf("8 lanes, 32-bit data width\n");
    printf("\n");
    
    // Check initial status
    uint32_t status = warp_get_status();
    printf("Initial status: 0x%08X\n", status);
    if (status & 0x1) {
        printf("  - Accelerator is IDLE\n");
    }
    
    // Run tests
    test_simple_add();
    test_multiply();
    test_fma();
    test_max_relu();
    test_masked_execution();
    
    printf("\n==========================================\n");
    printf(" All Tests Completed!                    \n");
    printf("==========================================\n");
    
    return 0;
}
