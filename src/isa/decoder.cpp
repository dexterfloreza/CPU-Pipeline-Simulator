#include "rv32i.hpp"
#include <cstdint>

static int32_t sign_extend(uint32_t v, int bits){
    int32_t m = 1<<(bits-1);
    return (v^m)-m;
}

DecodedInstr decode(uint32_t instr){
    DecodedInstr d{};
    uint32_t opcode = instr & 0x7F;
    d.rd = (instr>>7)&0x1F;
    d.funct3=(instr>>12)&7;
    d.rs1=(instr>>15)&0x1F;
    d.rs2=(instr>>20)&0x1F;
    d.funct7=(instr>>25)&0x7F;
    switch(opcode){
        case 0b0110011: d.opcode=Opcode::OP;break;
        case 0b0010011: d.opcode=Opcode::OP_IMM;break;
        default: d.opcode=Opcode::INVALID;
    }
    if(d.opcode==Opcode::OP_IMM) d.imm=sign_extend(instr>>20,12);
    return d;
}
