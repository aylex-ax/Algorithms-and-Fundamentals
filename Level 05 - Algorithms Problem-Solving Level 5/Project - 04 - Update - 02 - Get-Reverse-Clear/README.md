# Project 4 — Update 02: Get, Reverse & Clear

## Description
This update adds three operations to `clsDynamicArray`: retrieving an item by index, reversing the array in place, and clearing it entirely. Together with `Resize` from Update 01, the array now supports the core operations expected of a dynamic array container.

## Features
**Base + Update 01 (carried over):**
- `SetItem`, `Size`, `IsEmpty`, `PrintList`, `Resize`, constructor/destructor with heap allocation.

**New in this Update:**
- `GetItem(int index)` — returns the item at a given index.
- `Reverse()` — reverses the array in place by building a new array with items copied in reverse order, then adopting it.
- `Clear()` — empties the array (resizes it down to zero elements).

## Project Structure

| Function | Responsibility |
|---|---|
| `GetItem` | Return the item stored at a given index |
| `Reverse` | Build a reversed copy of the array and adopt it, freeing the old array |
| `Clear` | Reset the array to zero size, freeing the old array |
| *(all other functions)* | Unchanged from Project 4 base and Update 01 |

## Program Flow
1. A `clsDynamicArray<int>` of size 5 is constructed and filled with 10, 20, 30, 40, 50.
2. Its emptiness, size, and items are printed.
3. `GetItem(2)` retrieves and prints the third item.
4. `Reverse()` reverses the array; items are printed again.
5. `Clear()` empties the array; items are printed again (nothing to show).

## Sample Input/Output
```
Is Empty?  0
Array Size: 5

Array Items:
10 20 30 40 50

Item(2): 30

Array Items after reverse:
50 40 30 20 10

Array Items after clear:

```

## Concepts Practiced
- Reversing a dynamically allocated array by constructing a new array in reverse order rather than swapping in place.
- Reusing the "allocate new, copy, free old, reassign" pattern (introduced in `Resize`) for both `Reverse` and `Clear`.
- Treating "clearing" a container as a special case of resizing to zero.

## How to Run
1. Compile `main.cpp` (which includes `clsDynamicArray.h`) with a C++11 (or later) compiler.
2. Run the resulting executable.

## What I Learned
- How to reverse an array without an in-place swap, by allocating a second buffer and copying items back-to-front.
- How clearing a container can be implemented consistently with resizing, instead of as a separate special case.

## Known Issues
- `GetItem` does not perform any bounds checking — passing an out-of-range index results in undefined behavior instead of a safe failure (unlike `SetItem`, which does check bounds).
- (Carried over) `SetItem` still does not check for a negative index.
- (Carried over) `_TempArray` remains a class member reused as a temporary buffer across `Resize`, `Reverse`, and `Clear`, rather than a local variable in each function.

## Future Improvements
- Add bounds checking to `GetItem`, mirroring the pattern already used in `SetItem`.
- Implement `Reverse` as an in-place index swap (`O(1)` extra space) instead of allocating a second array, since no resizing is actually needed for a reversal.

## Built With
- C++ (C++11 or later)
