#pragma once
#include "../core/alu.hpp"
#include "../isa/rv32i.hpp"
#include "../core/cpu_state.hpp"

struct EXStage{
    uint32_t result=0;
    void execute(const DecodedInstr& d, CPUState& s){
        result=alu_execute(d,s.x(d.rs1),s.x(d.rs2));
    }
};
