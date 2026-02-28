## Array Multiplication

Dynamically allocates a result array and multiplies each element
of array1 against every element of array2.

## Concepts practiced
- Heap allocation with new/delete[]
- Returning pointers from functions
- Row-major 2D indexing: i * cols + j
- const correctness for read-only parameters
- Function declarations and definitions

## CUDA relevance
The i * array2_size + j indexing pattern is identical to how CUDA
threads address 2D data in 1D memory. This is direct preparation
for GPU kernel development where each thread computes its position
mathematically rather than using a counter.
