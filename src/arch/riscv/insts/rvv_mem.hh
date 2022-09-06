#ifndef __ARCH_RISCV_RVV_MEM_HH__
#define __ARCH_RISCV_RVV_MEM_HH__

#include "arch/riscv/insts/static_inst.hh"

namespace gem5
{

namespace RiscvISA
{

class RVVLoad : public RiscvStaticInst
{
 protected:
    Request::Flags memAccessFlags;

 public:
  RVVLoad (const char *mnem, ExtMachInst _machInst,
           OpClass __opClass)
      : RiscvStaticInst(mnem, _machInst, __opClass)
  {}

 protected:

    std::string generateDisassembly(
        Addr pc, const loader::SymbolTable *symtab) const override;
};


class RvvUnitStrideMem : public RVVLoad
{
 protected:
  RegIndex dest;
  RegIndex base;

 public:
  RvvUnitStrideMem(const char *mnem, ExtMachInst _machInst,
                   OpClass __opClass,
                   RegIndex _dest, RegIndex _base)
      : RVVLoad(mnem, _machInst, __opClass),
        dest(_dest), base(_base)
  {}

  std::string generateDisassembly(
      Addr pc, const loader::SymbolTable *symtab) const override;

  Fault execute(ExecContext *xc,
                Trace::InstRecord *traceData) const;

};

} // namespace RiscvISA
} // namespace gem5


#endif // __ARCH_RISCV_RVV_MEM_HH__
