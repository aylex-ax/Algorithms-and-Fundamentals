# Project 4 — Update 04: Delete First & Last Item

## Description
This update adds two convenience wrappers around `DeleteItemAt`: `DeleteFirstItem()` and `DeleteLastItem()`, covering the two most common deletion cases (removing from either end of the array) without requiring the caller to know the index.

## Features
**Base + previous Updates (carried over):**
- `SetItem`, `Size`, `IsEmpty`, `PrintList`, `Resize`, `Reverse`, `Clear`, `GetItem`, `DeleteItemAt`, constructor/destructor with heap allocation.

**New in this Update:**
- `DeleteFirstItem()` — removes the item at index 0 by delegating to `DeleteItemAt(0)`.
- `DeleteLastItem()` — removes the item at the last valid index by delegating to `DeleteItemAt(_Size - 1)`.

## Project Structure

| Function | Responsibility |
|---|---|
| `DeleteFirstItem` | Delegate to `DeleteItemAt(0)` to remove the first item |
| `DeleteLastItem` | Delegate to `DeleteItemAt(_Size - 1)` to remove the last item |
| *(all other functions)* | Unchanged from Project 4 base and previous Updates |

## Program Flow
1. A `clsDynamicArray<int>` of size 5 is constructed and filled with 10, 20, 30, 40, 50.
2. Its emptiness, size, and items are printed.
3. `DeleteFirstItem()` removes the first item (10); size and items are printed.
4. `DeleteLastItem()` removes the last item (50); size and items are printed.

## Sample Input/Output
```
Is Empty?  0
Array Size: 5

Array Items:
10 20 30 40 50

Array Items after deleting FirstItem:

Array Size: 4
20 30 40 50

Array Items after deleting LastItem:

Array Size: 3
20 30 40
```

## Concepts Practiced
- Building simple, intention-revealing wrapper functions on top of a more general one (`DeleteItemAt`), instead of duplicating its logic.
- Reasoning about edge indices (`0` and `_Size - 1`) when composing operations.

## How to Run
1. Compile `main.cpp` (which includes `clsDynamicArray.h`) with a C++11 (or later) compiler.
2. Run the resulting executable.

## What I Learned
- How composing a specific operation (delete first/last) from a more general one (delete at index) keeps the codebase small and consistent.
- Why delegating to an already-validated function (`DeleteItemAt`) automatically inherits its safety checks, without needing to re-validate.

## Known Issues
- Both `DeleteFirstItem` and `DeleteLastItem` ignore the `bool` success/failure result returned by `DeleteItemAt` — if the array is already empty, the deletion silently does nothing rather than reporting failure to the caller.
- (Carried over from Update 03) `Resize` still does not clamp a negative `NewSize` to 0 — this regression from Update 01 remains unresolved.
- (Carried over) `GetItem` still has no bounds checking; `SetItem` still does not check for a negative index; `_TempArray` remains a class member rather than a local variable.

## Future Improvements
- Have `DeleteFirstItem`/`DeleteLastItem` return the `bool` result of `DeleteItemAt` so callers can detect a no-op deletion on an empty array.
- Restore the negative-size clamp in `Resize`.

## Built With
- C++ (C++11 or later)
