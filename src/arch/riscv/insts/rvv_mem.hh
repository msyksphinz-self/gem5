#ifndef __ARCH_RISCV_RVV_MEM_HH__
#define __ARCH_RISCV_RVV_MEM_HH__

#include "arch/riscv/insts/static_inst.hh"

namespace gem5
{

namespace RiscvISA
{

class RvvUnitStrideMemSS : public RiscvStaticInst
{
 protected:
  RegIndex dest;
  RegIndex base;

  RvvUnitStrideMemSS(const char *mnem, ExtMachInst _machInst,
                     OpClass __opClass,
                     RegIndex _dest, RegIndex _base)
      : RiscvStaticInst(mnem, _machInst, __opClass),
        dest(_dest), base(_base)
  {}

  std::string generateDisassembly(
      Addr pc, const loader::SymbolTable *symtab) const override;
};

class RvvUnitStrideMemSI : public RiscvStaticInst
{
 protected:
  RegIndex dest;
  RegIndex base;

  RvvUnitStrideMemSI(const char *mnem, ExtMachInst _machInst,
                     OpClass __opClass,
                     RegIndex _dest, RegIndex _base)
      : RiscvStaticInst(mnem, _machInst, __opClass),
        dest(_dest), base(_base)
  {}

  std::string generateDisassembly(
      Addr pc, const loader::SymbolTable *symtab) const override;
};

} // namespace RiscvISA
} // namespace gem5


#endif // __ARCH_RISCV_RVV_MEM_HH__
