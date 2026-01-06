@echo off
REM Windows batch script to run ALU testbench
REM Adjust paths for your simulator

echo Running ALU Testbench...

REM Check for ModelSim (adjust path as needed)
if exist "C:\intelFPGA\*\modelsim_ase\win32aloem\vsim.exe" (
    echo Using ModelSim...
    REM Add ModelSim commands here
    echo TODO: Add ModelSim commands
    goto :end
)

REM Check for Vivado (includes Vivado Simulator)
if exist "C:\Xilinx\Vivado\*\bin\vivado.bat" (
    echo Using Vivado Simulator...
    REM Add Vivado commands here
    echo TODO: Add Vivado commands
    goto :end
)

echo ERROR: No supported simulator found!
echo Please install ModelSim or Vivado
:end

