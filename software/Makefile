# Makefile for Warp bare-metal test program

# RISC-V toolchain
RISCV_PREFIX = riscv64-unknown-elf-
CC = $(RISCV_PREFIX)gcc
OBJDUMP = $(RISCV_PREFIX)objdump
OBJCOPY = $(RISCV_PREFIX)objcopy

# Flags
CFLAGS = -march=rv64gc -mabi=lp64d -static -mcmodel=medany \
         -fvisibility=hidden -nostdlib -nostartfiles \
         -O2 -Wall -Wextra

LDFLAGS = -static -nostdlib -T link.ld

# Source files
SRCS = warp_test.c
OBJS = $(SRCS:.c=.o)
TARGET = warp_test.riscv

.PHONY: all clean dump

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

dump: $(TARGET)
	$(OBJDUMP) -D $(TARGET) > $(TARGET).dump

clean:
	rm -f $(OBJS) $(TARGET) $(TARGET).dump
