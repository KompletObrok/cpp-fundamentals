# Letter Pyramid

Builds a symmetric letter pyramid from a user input string.

## Example
Input: "HELLO"

```
    H
   HEH
  HELEH
 HELLEH
HELLOLEH
```

## Concepts practiced
- Nested sibling for loops
- Non-trivial loop bounds (length - 1 - i)
- Forward and reverse traversal in same row
- Off-by-one boundary handling (j >= 0, j <= i)

## Note
The three sibling loops pattern mirrors boundary handling
in CUDA thread blocks where left, center, and right regions
are often processed independently.
