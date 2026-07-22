# Project 4 — Update 06: Insert At Index

## Description
This update adds `InsertAt(T index, T value)` to `clsDynamicArray`, allowing a new item to be inserted at any valid position (including at the very end), growing the array by one and shifting all subsequent items up to make room.

## Features
**Base + previous Updates (carried over):**
- `SetItem`, `Size`, `IsEmpty`, `PrintList`, `Resize`, `Reverse`, `Clear`, `GetItem`, `DeleteItemAt`, `DeleteFirstItem`, `DeleteLastItem`, `Find`, `DeleteItem`, constructor/destructor with heap allocation.

**New in this Update:**
- `InsertAt(T index, T value)` — inserts `value` at the given index, shifting existing items from that index onward up by one slot; growing the array's size by 1. Accepts an index equal to `Size()` (insert at the end). Returns `false` if the index is negative or greater than `Size()`.

## Project Structure

| Function | Responsibility |
|---|---|
| `InsertAt` | Validate the index, allocate a larger array, copy items before the index, place the new value, copy items from the index onward shifted up by one, free the old array |
| *(all other functions)* | Unchanged from Project 4 base and previous Updates |

## Program Flow
1. A `clsDynamicArray<int>` of size 5 is constructed and filled with 10, 20, 30, 40, 50.
2. Its emptiness, size, and items are printed.
3. `InsertAt(2, 500)` inserts 500 at index 2, shifting 30/40/50 up by one; the resulting size and items are printed.

## Sample Input/Output
```
Is Empty?  0
Array Size: 5

Array Items:
10 20 30 40 50

Array after insert 500 at index 2:
Array Size: 6
10 20 500 30 40 50
```

## Concepts Practiced
- Growing a fixed-size array by allocating a larger one, splicing in a new element, and shifting the remainder.
- Mirroring the "allocate new / copy before / copy after / free old" pattern already used by `Resize`, `DeleteItemAt`, and others, adapted for insertion instead of removal.
- Allowing an insertion index equal to the current size, so the operation can also append to the end.

## How to Run
1. Compile `main.cpp` (which includes `clsDynamicArray.h`) with a C++11 (or later) compiler.
2. Run the resulting executable.

## What I Learned
- How inserting into the middle of an array requires shifting every subsequent element, unlike appending to the end.
- How the same general reallocate-and-copy pattern used for deletion can be adapted, in reverse, for insertion.

## Known Issues
- `InsertAt`'s `index` parameter is declared as type `T` (the array's element type) instead of `int` — this works by coincidence in the demo because `T` is `int` here, but for any other element type (e.g. `T = string` or a custom struct), the function signature would no longer accept a plain integer index as written, and comparisons like `index > _Size` would be comparing a `T` to an `int`. This is a type-design issue independent of the current test case.
- (Carried over) `Find` only returns the first matching index for duplicate values.
- (Carried over) `Resize` still does not clamp a negative `NewSize` to 0.
- (Carried over) `GetItem` still has no bounds checking; `SetItem` still does not check for a negative index; `_TempArray` remains a class member rather than a local variable.

## Future Improvements
- Change `InsertAt`'s index parameter type to `int` regardless of `T`, matching the pattern used by `SetItem`, `GetItem`, and `DeleteItemAt`.
- Restore the negative-size clamp in `Resize`.

## Built With
- C++ (C++11 or later)
