#pragma once
#include <vector>
#include <cstdint>

struct Memory{
    std::vector<uint8_t> mem;
    Memory(size_t s):mem(s,0){}
    uint32_t load32(uint32_t a)const{
        return mem[a] | (mem[a+1]<<8) | (mem[a+2]<<16) | (mem[a+3]<<24);
    }
    void store32(uint32_t a,uint32_t v){
        mem[a]=v&0xFF;
        mem[a+1]=(v>>8)&0xFF;
        mem[a+2]=(v>>16)&0xFF;
        mem[a+3]=(v>>24)&0xFF;
    }
};
