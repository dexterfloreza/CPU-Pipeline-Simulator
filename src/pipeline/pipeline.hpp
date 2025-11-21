#pragma once
#include "../core/cpu_state.hpp"
#include "../core/memory.hpp"
#include "../isa/rv32i.hpp"

struct Pipeline{
    CPUState state;
    Memory mem;
    Pipeline(size_t s=(1<<20)):mem(s){}
    void step();
};
