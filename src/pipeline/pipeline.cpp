#include "pipeline.hpp"
#include "stage_if.hpp"
#include "stage_id.hpp"
#include "stage_ex.hpp"
#include "stage_mem.hpp"
#include "stage_wb.hpp"

DecodedInstr decode(uint32_t);

void Pipeline::step(){
    IFStage IF; IF.execute(state,mem);
    DecodedInstr d = decode(IF.instr);
    EXStage EX; EX.execute(d,state);
    MEMStage MEM; MEM.execute();
    WBStage WB; WB.execute(d,state,EX.result);
}
