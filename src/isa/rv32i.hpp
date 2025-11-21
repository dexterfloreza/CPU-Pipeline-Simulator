#pragma once
#include <cstdint>

enum class Opcode { LUI, AUIPC, JAL, JALR, BRANCH, LOAD, STORE, OP_IMM, OP, MISC_MEM, SYSTEM, INVALID };

struct DecodedInstr {
    Opcode opcode;
    uint32_t funct3, funct7;
    uint32_t rs1, rs2, rd;
    int32_t imm;
};
