# Project 1 — Update 06: Get Item By Index

## Description
This update extends the `clsDblLinkedList` (Doubly Linked List) class with a `GetItem(int Index)` function.

While `GetNode(int Index)` (added in Update 05) returns a pointer to the node at a given position, `GetItem` builds on top of it to return the actual **value** stored at that position, hiding the node/pointer details from the caller.

## Features
- Retrieve the value stored at any valid index in the list, without exposing the internal `Node` structure to the caller.
- Reuses the existing `GetNode` function internally instead of duplicating traversal logic.
- Returns `NULL` when the index is out of range (see Known Issues below).

## Project Structure

| Function | Responsibility |
|---|---|
| `GetNode(int Index)` | Returns a pointer to the node at `Index` (added in Update 05). |
| `GetItem(int Index)` | Calls `GetNode`, then returns the `value` stored in that node. |

## Program Flow
1. `main.cpp` builds a list of 5 integers using `InsertAtBeginning`.
2. The list is printed with `PrintList()`.
3. `GetItem(2)` is called and the returned value is printed directly.

## Sample Input/Output
```
Linked List Contenet:
1 2 3 4 5

Item(2) Value is: 3
```

## Concepts Practiced
- Function composition (building a new function on top of an existing one instead of repeating logic).
- Separating "find the node" from "get the value" as two distinct responsibilities.
- Working with generic/templated data structures (`T` as the stored value type).

## How to Run
1. Include `clsDblLinkedList.h` in your project.
2. Compile `main.cpp` with a C++11 (or later) compiler.
3. Run the executable.

## What I Learned
- How to layer a simpler, value-returning function on top of a lower-level, pointer-returning one.

## ⚠️ Known Issues
- **`GetItem` return value on invalid index:** the function returns `NULL` when `GetNode` fails to find the index. For a templated type `T`, this only works cleanly for pointer types; for value types like `int`, `NULL` is implicitly converted to `0`, which is indistinguishable from a real stored value of `0`. A safer design would throw an exception, use `std::optional<T>`, or take a success flag by reference.
- Carried over from earlier updates: `PrintList()` still calls `delete Current;` right after the loop, where `Current` is always `NULL` at that point — harmless (delete on `NULL` is a no-op) but dead code.
- `main.cpp` has a typo in the printed message: `"Linked List Contenet:"` should be `"Content:"`.

## Future Improvements
- Replace the `NULL` return in `GetItem` with a safer pattern (exception, `std::optional`, or an output success flag).

## Built With
- C++11
