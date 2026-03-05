# Section 14 Challenge - Operator Overloading

Overloading operators on a custom `Mystring` class that wraps a raw `char*` C-style string.

The challenge is implemented twice — once using **member functions** and once using **non-member (friend) functions** — to practice both approaches.

## Projects

| Folder | Approach |
|--------|----------|
| `05-operator-overload-member` | All operators implemented as member functions |
| `06-operator-overload-non-member` | Binary/unary operators as non-member friends, compound assignment and `++` as members |

## Overloaded Operators

| Operator | Description | Example |
|----------|-------------|---------|
| `-` (unary) | Returns lowercase copy | `s1 = -s1;` |
| `==` | Equality comparison | `s1 == s2` |
| `!=` | Inequality comparison | `s1 != s2` |
| `<` | Lexicographic less-than | `s1 < s2` |
| `>` | Lexicographic greater-than | `s1 > s2` |
| `+` | Concatenation | `s1 + s2` |
| `+=` | Concatenate and assign | `s1 += s2` |
| `*` | Repeat n times | `s2 * 3` |
| `*=` | Repeat and assign | `s1 *= 4` |
| `++` (pre) | Uppercase in-place, return ref | `++s` |
| `++` (post) | Uppercase in-place, return old value | `s++` |

## Build



## Notes

- `+=` and `*=` return `Mystring&` and delegate to `+` and `*` to avoid code duplication.
- Post-increment calls pre-increment internally per the canonical pattern.
- In the non-member version, `+=`, `*=`, and `++` stay as members since they modify `*this` — everything else is a friend function.
- Comparison operators use `std::strcmp` under the hood.
