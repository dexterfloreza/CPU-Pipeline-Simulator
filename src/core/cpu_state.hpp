#pragma once
#include <array>
#include <cstdint>

struct CPUState {
    std::array<uint32_t,32> regs{};
    uint32_t pc=0;

    uint32_t &x(uint32_t i){
        static uint32_t zero=0;
        return (i==0)?zero:regs[i];
    }
};
