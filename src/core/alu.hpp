#pragma once
#include <cstdint>
#include "../isa/rv32i.hpp"

uint32_t alu_execute(const DecodedInstr&, uint32_t, uint32_t);
