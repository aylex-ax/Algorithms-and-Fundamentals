# Project 4 — Update 05: Find & Delete Item by Value

## Description
This update adds value-based search and deletion to `clsDynamicArray`: `Find(T Value)` locates an item by its value, and `DeleteItem(T Value)` uses `Find` internally to remove the first matching item, rather than requiring the caller to already know its index.

## Features
**Base + previous Updates (carried over):**
- `SetItem`, `Size`, `IsEmpty`, `PrintList`, `Resize`, `Reverse`, `Clear`, `GetItem`, `DeleteItemAt`, `DeleteFirstItem`, `DeleteLastItem`, constructor/destructor with heap allocation.

**New in this Update:**
- `Find(T Value)` — returns the index of the first item equal to `Value`, or `-1` if not found.
- `DeleteItem(T Value)` — finds the first item equal to `Value` and removes it via `DeleteItemAt`; returns `false` if the value isn't present.

## Project Structure

| Function | Responsibility |
|---|---|
| `Find` | Linearly scan the array and return the index of the first match, or `-1` |
| `DeleteItem` | Use `Find` to locate a value, then delegate to `DeleteItemAt` to remove it |
| *(all other functions)* | Unchanged from Project 4 base and previous Updates |

## Program Flow
1. A `clsDynamicArray<int>` of size 5 is constructed and filled with 10, 20, 30, 40, 50.
2. Its emptiness, size, and items are printed.
3. `Find(30)` locates the value and prints its index (or a "not found" message).
4. `DeleteItem(30)` removes that value; the resulting size and items are printed.

## Sample Input/Output
```
Is Empty?  0
Array Size: 5

Array Items:
10 20 30 40 50

30 is found at index : 2

Array Items after deleting 30:
Array Size: 4
10 20 40 50
```

## Concepts Practiced
- Linear search over a raw array.
- Composing a value-based operation (`DeleteItem`) from an index-based one (`DeleteItemAt`) via an intermediate lookup (`Find`).
- Using a sentinel return value (`-1`) to signal "not found" instead of an exception or output parameter.

## How to Run
1. Compile `main.cpp` (which includes `clsDynamicArray.h`) with a C++11 (or later) compiler.
2. Run the resulting executable.

## What I Learned
- How to layer a search-based deletion feature on top of an existing index-based one, reusing validation logic instead of duplicating it.
- The trade-offs of using a sentinel value (`-1`) versus other error-signaling approaches (exceptions, `bool` + output parameter) for a "not found" result.

## Known Issues
- `Find` only returns the *first* matching index — if the value appears multiple times, `DeleteItem` will only ever remove the first occurrence, and there's no way to find/delete subsequent duplicates directly.
- (Carried over from Update 04) `DeleteFirstItem`/`DeleteLastItem` still ignore `DeleteItemAt`'s success/failure result.
- (Carried over from Update 03) `Resize` still does not clamp a negative `NewSize` to 0.
- (Carried over) `GetItem` still has no bounds checking; `SetItem` still does not check for a negative index; `_TempArray` remains a class member rather than a local variable.

## Future Improvements
- Add a `FindAll`/`DeleteAll` pair (or an optional "start search from index" parameter to `Find`) to support duplicate values.
- Restore the negative-size clamp in `Resize`.

## Built With
- C++ (C++11 or later)
