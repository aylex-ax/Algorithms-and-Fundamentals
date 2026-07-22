# Project 4 — Update 01: Resize Array

## Description
This update adds a `Resize(int NewSize)` function to `clsDynamicArray`, allowing the array's capacity to be changed after construction — either shrinking it (discarding trailing items) or growing it (keeping existing items and adding uninitialized room at the end).

## Features
**Base (carried over from Project 4):**
- `SetItem`, `Size`, `IsEmpty`, `PrintList`, constructor/destructor with heap allocation.

**New in this Update:**
- `Resize(int NewSize)` — reallocates the underlying array to a new size:
  - Negative sizes are clamped to 0.
  - If shrinking, only the items that still fit are preserved.
  - If growing, all existing items are preserved and new slots are added (uninitialized).
  - The old array is freed and replaced with the new one.

## Project Structure

| Function | Responsibility |
|---|---|
| `Resize` | Allocate a new array of the requested size, copy over the items that still fit, free the old array, and adopt the new one |
| *(all other functions)* | Unchanged from Project 4 base |

## Program Flow
1. A `clsDynamicArray<int>` of size 5 is constructed and filled with 10, 20, 30, 40, 50.
2. Its emptiness, size, and items are printed.
3. `Resize(2)` shrinks the array to 2 items; size and items are printed again.
4. `Resize(10)` grows the array to 10 items (keeping the 2 surviving items, adding 8 uninitialized slots); size and items are printed again.

## Sample Input/Output
```
Is Empty?  0
Array Size: 5

Array Items:
10 20 30 40 50

Array Size: 2

Array Items after resize to 2 :
10 20

Array Size: 10

Array Items after resize to 10 :
10 20 [8 uninitialized values]
```

## Concepts Practiced
- Manual dynamic array reallocation: allocate new memory, copy old data, free old memory.
- Handling both growth and shrink cases within a single resize routine.
- Managing a temporary buffer (`_TempArray`) during reallocation to avoid data loss.

## How to Run
1. Compile `main.cpp` (which includes `clsDynamicArray.h`) with a C++11 (or later) compiler.
2. Run the resulting executable.

## What I Learned
- How to safely grow or shrink a dynamically allocated array while preserving existing data.
- Why a temporary buffer is needed when reallocating: writing directly into a smaller/larger block of the same array isn't possible in C++, so a new block has to be allocated first.

## Known Issues
- When growing the array, the newly added slots (beyond the old size) are left uninitialized — they hold garbage values, not zeros or a default value, until explicitly set.
- `_TempArray` is declared as a permanent member of the class but is only ever used as a short-lived temporary inside `Resize` — it doesn't need to persist as member state.
- (Carried over from Project 4 base) `SetItem` still does not check for a negative index.

## Future Improvements
- Zero-initialize (or default-construct) newly added slots when growing, so `PrintList` doesn't show garbage values.
- Make `_TempArray` a local variable inside `Resize` instead of a class member.

## Built With
- C++ (C++11 or later)
