# Topic 3 — Inheritance

## Concept
- Inheritance allows a class to acquire properties and functions of another class
- **Parent class (Base class)** — the class that gives
- **Child class (Derived class)** — the class that receives

## Syntax
```cpp
class Child : public Parent {
    // child's own members
};
```

## Types of Inheritance Covered
| Type | Description | Example |
|------|-------------|---------|
| Single | One child, one parent | Dog inherits Animal |
| Hierarchical | Multiple children, one parent | Dog & Cat inherit Animal |
| Multilevel | Child → Parent → Grandparent | Manager → Employee → Person |

## Key Points
- Child class gets all `public` members of parent automatically
- Child constructor must call parent constructor using `: ParentClass(...)`
- Child can have its own additional data members and functions
- Integer division bug — use `balance * rate / 100` not `balance * (rate/100)`

## Files
- `basics.cpp` — Animal, Dog, Cat (single + hierarchical inheritance)
- `q1_vehicle.cpp` — Vehicle, Car, Bike (hierarchical inheritance)
- `q2_multilevelInheritance.cpp` — Person, Employee, Manager (multilevel inheritance)
- `q3_bankProject.cpp` — BankAccount, SavingsAccount, CurrentAccount

## Bank Project Progress 🏦
- ✅ Topic 1 — Basic class with data members and functions
- ✅ Topic 2 — Added constructors and destructor
- ✅ Topic 3 — SavingsAccount and CurrentAccount via inheritance