#pragma once
#include "../core/cpu_state.hpp"
#include "../isa/rv32i.hpp"

struct WBStage{
    void execute(const DecodedInstr& d, CPUState& s, uint32_t r){
        if(d.rd!=0) s.x(d.rd)=r;
    }
};
