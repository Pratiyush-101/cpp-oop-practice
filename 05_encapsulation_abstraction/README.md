# Topic 5 — Encapsulation & Abstraction

## Encapsulation
Wrapping data and functions together and hiding data from outside using access specifiers.

## Abstraction
Hiding complexity and showing only what's necessary using pure virtual functions.

## Access Specifiers
| Specifier | Accessible Inside Class | Accessible in Child | Accessible Outside |
|-----------|------------------------|--------------------|--------------------|
| private | ✅ | ❌ | ❌ |
| protected | ✅ | ✅ | ❌ |
| public | ✅ | ✅ | ✅ |

## Key Points
- Use getters to read private data
- Use setters with validation to update private data
- Pure virtual `= 0` makes class abstract
- Cannot create object of abstract class
- Always add virtual destructor in abstract classes

## Files
- `basics.cpp` — BankAccount with private/protected/public
- `basics_abstraction.cpp` — Vehicle abstract class
- `q1_student.cpp` — Student with encapsulation and setter validation
- `q2_appliance.cpp` — Appliance abstract class
- `q3_bankProject.cpp` — Final BankAccount with full OOP design

## Bank Project Progress 🏦
- ✅ Topic 1 — Basic class
- ✅ Topic 2 — Constructors
- ✅ Topic 3 — Inheritance
- ✅ Topic 4 — Virtual functions
- ✅ Topic 5 — Abstraction and encapsulation