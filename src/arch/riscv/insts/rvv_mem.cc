#include "arch/riscv/insts/rvv_mem.hh"

namespace gem5
{

namespace RiscvISA
{

std::string
RvvUnitStrideMemSS::generateDisassembly(
    Addr pc, const loader::SymbolTable *symtab) const
{
  return "_RvvUnitStrideMemSS_";
}

std::string
RvvUnitStrideMemSI::generateDisassembly(
    Addr pc, const loader::SymbolTable *symtab) const
{
  return "_RvvUnitStrideMemSI_";
}

} // namespace RiscvISA
} // namespace gem5
