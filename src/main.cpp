#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/Support/raw_ostream.h>

int main() {
    llvm::LLVMContext Context;
    llvm::Module Module("test", Context);
    Module.print(llvm::errs(), nullptr);
    return 0;
}