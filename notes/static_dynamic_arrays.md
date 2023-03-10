# Static and Dynamic Arrays

## What is a static array?
A static array is a fixed lenght container containing n elements indexable from the range [0, n-1]

**_NOTE:_** indexable means that each slot/index in the array can be referenced with a number.

## When and where is a static array used?
- Storing and accesing sequencial data
- Temporarily storing objects
- Used tby IO routines as buffers
- Lookup tables and inverse lookup tables
- Can be used to return multiples values from a function
- Used in dynamic programming to cache answers to subproblems

### Complexity
|        | Static Array | Dynamic Array |
|:------:|:------------:|:-------------:|
| Access | 0(1)         | 0(1)          |
| Search | 0(n)         | 0(n)          |
| Insertion |N/A         | 0(n)          |
| Appending | N/A         | 0(n)          |
| Deletion | N/A         | 0(n)          |

In a static array elements are referenced by their index, there is no other way to access elements in an array. Array indexing is zero-based, meaing the first element is found in position zero.

## Operations on Dynamic Arrays
- Create a static array with an initial capacity.
- Add elements to the underlying static array, keeping track of the number of elements.
- If adding another element will exceed the capacity, then create a new static array with twice the capacity and copy the original elements into it.
