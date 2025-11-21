#pragma once
#include "../core/cpu_state.hpp"
#include "../core/memory.hpp"

struct IFStage{
    uint32_t instr=0;
    void execute(CPUState& s, Memory& m){
        instr=m.load32(s.pc);
        s.pc+=4;
    }
};
