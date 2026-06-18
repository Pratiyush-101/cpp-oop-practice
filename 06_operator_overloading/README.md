# Topic 6 — Operator Overloading

## Concept
Defining custom behavior for operators like +, -, ==, > for user-defined classes.

## Syntax
```cpp
ReturnType operator+(ClassName obj){
    return ClassName(member + obj.member);
}
```

## Key Points
- Always wrap return value in the class constructor
- Use && not comma when checking multiple conditions in ==
- Use abs() from <cmath> to avoid negative results in subtraction
- boolalpha prints true/false instead of 1/0

## Operators Covered
| Operator | Use |
|----------|-----|
| + | Add two objects |
| - | Subtract two objects |
| == | Check equality |
| > | Compare values |

## Files
- `basics.cpp` — Distance class with +, ==, >
- `q1_box.cpp` — Box class with +, -, ==
- `q2_complex.cpp` — Complex numbers with +, -, ==
- `q3_bankProject.cpp` — BankAccount with +, >, ==

## Bank Project Progress 🏦
- ✅ Topic 1 — Basic class
- ✅ Topic 2 — Constructors
- ✅ Topic 3 — Inheritance
- ✅ Topic 4 — Virtual functions
- ✅ Topic 5 — Abstraction and encapsulation
- ✅ Topic 6 — Operator overloading