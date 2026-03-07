# 08 - Smart Pointers

Dynamic object management using smart pointers. Creates a `unique_ptr` to a vector of `shared_ptr<Test>` objects, fills it from user input, and displays the data — demonstrating automatic cleanup through RAII with zero manual `delete` calls.

## Concepts

- `std::unique_ptr` for exclusive ownership of the vector
- `std::shared_ptr` for reference-counted Test objects
- `std::make_unique` / `std::make_shared` factory functions
- Passing smart pointer containers by reference
- RAII: constructor/destructor output confirms automatic lifetime management
