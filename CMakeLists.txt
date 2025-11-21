cmake_minimum_required(VERSION 3.12)
project(CycleAccurateCPUSim CXX)
set(CMAKE_CXX_STANDARD 17)
add_executable(cpu_sim
    src/main.cpp
    src/isa/decoder.cpp
    src/core/alu.cpp
)
