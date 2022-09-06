#include "arch/riscv/insts/rvv_mem.hh"

namespace gem5
{

namespace RiscvISA
{

std::string
RVVLoad::generateDisassembly(
    Addr pc, const loader::SymbolTable *symtab) const
{
  return "_RvvLoad_";
}


std::string
RvvUnitStrideMem::generateDisassembly(
    Addr pc, const loader::SymbolTable *symtab) const
{
  return "_RvvUnitStrideMem_";
}

Fault RvvUnitStrideMem::execute(ExecContext *xc,
    Trace::InstRecord *traceData) const
{
    return NoFault;
}

} // namespace RiscvISA
} // namespace gem5
