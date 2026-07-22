# Project 4 — Update 03: Delete Item At

## Description
This update adds `DeleteItemAt(int index)` to `clsDynamicArray`, allowing a single item to be removed from anywhere in the array. The array shrinks by one and all items after the removed one shift down to close the gap.

## Features
**Base + previous Updates (carried over):**
- `SetItem`, `Size`, `IsEmpty`, `PrintList`, `Resize`, `Reverse`, `Clear`, `GetItem`, constructor/destructor with heap allocation.

**New in this Update:**
- `DeleteItemAt(int index)` — removes the item at a given index, shifting all subsequent items down by one and shrinking the array by one slot. Returns `false` if the index is out of range (negative or `>= Size`), `true` on success.

## Project Structure

| Function | Responsibility |
|---|---|
| `DeleteItemAt` | Validate the index, allocate a smaller array, copy all items except the one being removed (shifting later items down), free the old array |
| *(all other functions)* | Unchanged from Project 4 base and previous Updates |

## Program Flow
1. A `clsDynamicArray<int>` of size 5 is constructed and filled with 10, 20, 30, 40, 50.
2. Its emptiness, size, and items are printed.
3. `DeleteItemAt(2)` removes the third item (30); the resulting size and items are printed.

## Sample Input/Output
```
Is Empty?  0
Array Size: 5

Array Items:
10 20 30 40 50

Array Items after deleting item(2):

Array Size: 4
10 20 40 50
```

## Concepts Practiced
- Removing an element from a fixed-size array by rebuilding a smaller one and skipping the removed index.
- Splitting a copy loop into "before the index" and "after the index" segments to close the gap left by a deletion.
- Input validation with a `bool` success/failure return, consistent with `SetItem`'s pattern.

## How to Run
1. Compile `main.cpp` (which includes `clsDynamicArray.h`) with a C++11 (or later) compiler.
2. Run the resulting executable.

## What I Learned
- How to implement element removal from a raw dynamic array without a built-in container, by reconstructing the array around the gap.
- Why careful index bookkeeping is needed when the "after" segment of a copy loop is shifted by one position relative to the source.

## Known Issues
- **Regression from Update 01:** `Resize` no longer clamps a negative `NewSize` to 0 (the `if (NewSize < 0) NewSize = 0;` clamp present in Update 01 has been removed in this version) — calling `Resize` with a negative size will now attempt `new T[negative]`, which is undefined behavior / will typically throw `std::bad_array_new_length`.
- `GetItem` still performs no bounds checking (carried over from Update 02).
- `SetItem` still does not check for a negative index (carried over from the base project); the previously-dead `_Size < 0` check has been removed in this version, which has no functional effect since it was unreachable either way.
- `_TempArray` remains a class member reused as a temporary buffer across `Resize`, `Reverse`, `Clear`, and now `DeleteItemAt`, rather than a local variable in each function.

## Future Improvements
- Restore the negative-size clamp in `Resize` to avoid undefined behavior on invalid input.
- Add bounds checking to `GetItem` and a negative-index check to `SetItem`.

## Built With
- C++ (C++11 or later)
