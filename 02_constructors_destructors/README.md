# Topic 2 — Constructors & Destructors

## Concept
- **Constructor** — automatically called when object is created
- **Destructor** — automatically called when object is destroyed

## Types of Constructors
| Type | Description |
|------|-------------|
| Default Constructor | No parameters, sets default values |
| Parameterized Constructor | Takes values when object is created |
| Copy Constructor | Creates a copy of an existing object |

## Key Points
- Constructor has same name as class, no return type
- Destructor has `~` before class name, no parameters
- Use `this->` pointer in parameterized constructor to avoid name conflicts

## Files
- `basics.cpp` — all 3 constructor types + destructor on Car class
- `q1_student.cpp` — Student class with constructors
- `q2_rectangle.cpp` — Rectangle class with constructors, area() and perimeter() return values
- `q3_bankaccount.cpp` — BankAccount upgraded with constructors

## Bank Project Progress 🏦
- ✅ Topic 1 — Basic class with data members and functions
- ✅ Topic 2 — Added constructors and destructor