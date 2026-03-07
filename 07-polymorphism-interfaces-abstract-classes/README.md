# 07 - Polymorphism, Interfaces & Abstract Classes

Refactored the Section 15 account hierarchy to use dynamic polymorphism. `Account` becomes an abstract base class with pure virtual `deposit`/`withdraw`, an `I_Printable` interface replaces per-class `operator<<` friends, and `Account_Util` collapses from 12 overloaded functions to 3 — all operating on `std::vector<Account *>`.

## Key Concepts

- Abstract classes via pure virtual functions (with implementations for reuse)
- Interface class (`I_Printable`) with virtual `print()` + single `operator<<`
- Dynamic dispatch through base class pointers
- Virtual destructors
- Eliminating code duplication through polymorphism



## Class Hierarchy

```
I_Printable (interface)
  └── Account (abstract)
        ├── Checking_Account
        └── Savings_Account
              └── Trust_Account
```
