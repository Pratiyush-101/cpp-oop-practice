# Topic 4 — Polymorphism

## Concept
Poly = many, Morph = forms. Same function name, different behavior.

## Two Types

### 1. Compile Time (Function Overloading)
- Same function name, different parameters
- Compiler decides which function to call at compile time

### 2. Runtime (Virtual Functions)
- Same function name, same parameters
- Decided at runtime using pointers
- Use `virtual` keyword in base class

## Key Points
- Overriding = same name, same params, child replaces parent behavior
- Overloading = same name, different params, multiple versions exist
- Always add `virtual destructor` when using virtual functions
- Always `delete` pointers created with `new`
- Pure virtual function `= 0` forces child to override it

## Files
- `basics_overloading.cpp` — Calculator with function overloading
- `basics_virtual.cpp` — Animal speak and move with virtual functions
- `q1_printer.cpp` — Printer class with overloaded print()
- `q2_shapeCalculator.cpp` — Shape calculator with pure virtual functions
- `q3_bankProject.cpp` — BankAccount with virtual showAccountType()

## Bank Project Progress 🏦
- ✅ Topic 1 — Basic class with data members and functions
- ✅ Topic 2 — Added constructors and destructor
- ✅ Topic 3 — SavingsAccount and CurrentAccount via inheritance
- ✅ Topic 4 — Virtual functions and polymorphism via pointers