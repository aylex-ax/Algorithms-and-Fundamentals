# Project 4 — Update 07: Insert at Beginning / Before / After / End

## Description
This update rounds out `clsDynamicArray`'s insertion capabilities by adding four convenience wrappers around `InsertAt`: inserting at the beginning, before a given index, after a given index, and at the end. This is the final planned update for Project 4.

## Features
**Base + previous Updates (carried over):**
- `SetItem`, `Size`, `IsEmpty`, `PrintList`, `Resize`, `Reverse`, `Clear`, `GetItem`, `DeleteItemAt`, `DeleteFirstItem`, `DeleteLastItem`, `Find`, `DeleteItem`, `InsertAt`, constructor/destructor with heap allocation.

**New in this Update:**
- `InsertAtBeginning(T value)` — inserts at index 0 via `InsertAt(0, value)`.
- `InsertBefore(T index, T value)` — intended to insert immediately before a given index.
- `InsertAfter(T index, T value)` — inserts immediately after a given index (falls back to inserting before the last item if `index` is out of range).
- `InsertAtEnd(T value)` — appends via `InsertAt(Size(), value)`.

## Project Structure

| Function | Responsibility |
|---|---|
| `InsertAtBeginning` | Delegate to `InsertAt(0, value)` |
| `InsertBefore` | Delegate to `InsertAt(index - 1, value)` (or `InsertAt(0, value)` if `index < 1`) |
| `InsertAfter` | Delegate to `InsertAt(index + 1, value)` (or `InsertAt(Size()-1, value)` if `index >= Size()`) |
| `InsertAtEnd` | Delegate to `InsertAt(Size(), value)` |
| *(all other functions)* | Unchanged from Project 4 base and previous Updates |

## Program Flow
1. A `clsDynamicArray<int>` of size 5 is constructed and filled with 10, 20, 30, 40, 50.
2. Its emptiness, size, and items are printed.
3. `InsertAtBeginning(400)` adds 400 to the front; size and items are printed.
4. `InsertBefore(2, 500)` is called; size and items are printed (see Known Issues — the actual placement differs from what "before index 2" suggests).
5. `InsertAfter(2, 600)` adds 600 right after the item currently at index 2; size and items are printed.
6. `InsertAtEnd(800)` appends 800; size and items are printed.

## Sample Input/Output (verified by running the code)
```
Is Empty?  0
Array Size: 5

Array Items:
10 20 30 40 50

Array after insert 400 at Begining:
Array Size: 6
400 10 20 30 40 50

Array after insert 500 before index 2:
Array Size: 7
400 500 10 20 30 40 50

Array after insert 600 after index 2:
Array Size: 8
400 500 10 600 20 30 40 50

Array after insert 800 at End:
Array Size: 9
400 500 10 600 20 30 40 50 800
```

## Concepts Practiced
- Building a family of intention-revealing insertion helpers on top of one general-purpose primitive (`InsertAt`).
- Reasoning carefully about off-by-one index arithmetic when translating a relative position ("before"/"after" a given index) into an absolute insertion index.
- Handling edge cases (index at or beyond the array's bounds) with fallback behavior.

## How to Run
1. Compile `main.cpp` (which includes `clsDynamicArray.h`) with a C++11 (or later) compiler.
2. Run the resulting executable.

## What I Learned
- How a small set of composed helper functions can express a richer insertion API without duplicating the core reallocate-and-shift logic.
- How easy it is to introduce an off-by-one error when translating "insert before/after index N" into a call to an index-based primitive.

## Known Issues
- **`InsertBefore` has an off-by-one bug.** `InsertAt(index, value)` already places `value` at `index` and shifts the old occupant of `index` (and everything after it) forward by one — which is exactly "insert before whatever is currently at `index`." So `InsertBefore` should call `InsertAt(index, value)` directly. Instead it calls `InsertAt(index - 1, value)`, which inserts one position earlier than intended. Confirmed by running the code: `InsertBefore(2, 500)` on `[400,10,20,30,40,50]` produces `[400,500,10,20,30,40,50]` — 500 lands immediately before the item that was at index 1 (10), not before the item that was at index 2 (20) as the call implies.
- **`InsertAfter`'s out-of-range fallback is inconsistent with "append".** When `index >= Size()`, it calls `InsertAt(Size() - 1, value)`, which inserts *before* the last item rather than appending after it — so an out-of-range `InsertAfter` call does not behave like `InsertAtEnd`. (Not exercised by the current `main.cpp`, since the demo only calls it with an in-range index.)
- (Carried over from Update 06) `InsertAt`'s `index` parameter is typed as `T` instead of `int`, which only works by coincidence when `T = int`.
- (Carried over) `Find` only returns the first matching index for duplicate values; `Resize` still does not clamp a negative `NewSize`; `GetItem` has no bounds checking; `SetItem` does not check for a negative index; `_TempArray` remains a class member rather than a local variable.

## Future Improvements
- Fix `InsertBefore` to call `InsertAt(index, value)` directly (dropping the `- 1`).
- Make `InsertAfter`'s out-of-range fallback call `InsertAt(Size(), value)` so it behaves like a true append when the index is beyond the array.
- Change index parameters from `T` to `int` throughout the insertion family, matching the rest of the class's index-based functions.

## Built With
- C++ (C++11 or later)
