# Topic 7 — Templates

## Concept
Write one function or class that works for any data type.

## Syntax
```cpp
template<typename T>
T functionName(T a, T b){ ... }

template<typename T>
class ClassName{ ... };
```

## Key Points
- Each template declaration covers only the next function or class
- T is just a placeholder — can name it anything
- Not all members need to be T — mix T and fixed types like string
- Return type should also be T when returning template data

## Files
- `basics.cpp` — function template add() and class template Box
- `q1_findMax.cpp` — findMax function template for any type
- `q2_pair.cpp` — Pair class template with swap()
- `q3_transaction.cpp` — Transaction class template for bank project

## Bank Project Progress 🏦
- ✅ Topic 1 — Basic class
- ✅ Topic 2 — Constructors
- ✅ Topic 3 — Inheritance
- ✅ Topic 4 — Virtual functions
- ✅ Topic 5 — Abstraction and encapsulation
- ✅ Topic 6 — Operator overloading
- ✅ Topic 7 — Templates