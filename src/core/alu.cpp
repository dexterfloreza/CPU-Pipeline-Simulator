#include "alu.hpp"

uint32_t alu_execute(const DecodedInstr& d, uint32_t a, uint32_t b){
    if(d.opcode==Opcode::OP_IMM && d.funct3==0) return a + d.imm;
    if(d.opcode==Opcode::OP && d.funct3==0){
        if(d.funct7==0) return a+b;
        if(d.funct7==0b0100000) return a-b;
    }
    return 0;
}
