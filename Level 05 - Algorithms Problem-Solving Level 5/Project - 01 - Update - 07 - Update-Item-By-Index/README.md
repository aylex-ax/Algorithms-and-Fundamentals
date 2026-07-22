# Project 1 — Update 07: Update Item By Index

## Description
This update extends the `clsDblLinkedList` (Doubly Linked List) class with an `UpdateItem(int Index, T NewValue)` function, allowing the value stored at a given position in the list to be changed in place.

## Features
- Update the value at any valid index without removing and re-inserting the node.
- Reuses `GetNode` internally to locate the target node.
- Returns a `bool` indicating whether the update succeeded (`true`) or the index was invalid (`false`).

## Project Structure

| Function | Responsibility |
|---|---|
| `GetNode(int Index)` | Returns a pointer to the node at `Index` (from Update 05). |
| `UpdateItem(int Index, T NewValue)` | Locates the node via `GetNode`, overwrites its `value` with `NewValue`, and reports success/failure. |

## Program Flow
1. `main.cpp` builds a list of 5 integers using `InsertAtBeginning`.
2. The list is printed with `PrintList()`.
3. `UpdateItem(2, 500)` overwrites the value at index 2.
4. The list is printed again to show the change.

## Sample Input/Output
```
Linked List Contenet:
1 2 3 4 5

After Updating Item(2):
1 2 500 4 5
```

## Concepts Practiced
- Modifying data in place within a linked structure (no memory allocation/deallocation needed).
- Using a boolean return value to signal success/failure instead of throwing or silently ignoring invalid input.
- Continued reuse of `GetNode` as a shared building block for index-based operations (`GetItem`, `UpdateItem`).

## How to Run
1. Include `clsDblLinkedList.h` in your project.
2. Compile `main.cpp` with a C++11 (or later) compiler.
3. Run the executable.

## What I Learned
- How to build safe, reusable index-based accessors/mutators on top of a single traversal function (`GetNode`), keeping each new feature small and focused.

## ⚠️ Known Issues
- Carried over from earlier updates: `PrintList()` still calls `delete Current;` right after the loop, where `Current` is always `NULL` at that point — harmless (delete on `NULL` is a no-op) but dead code.
- Carried over: `GetItem` still returns `NULL` on an invalid index, which is ambiguous with a real stored value of `0` for `int`-type lists.
- `main.cpp` has a typo in the printed message: `"Linked List Contenet:"` should be `"Content:"`.
- `UpdateItem`'s return value (`true`/`false`) is not actually checked or used in `main.cpp` — the demo doesn't show the failure path (e.g. calling it with an out-of-range index).

## Future Improvements
- Add a demo call to `UpdateItem` with an invalid index in `main.cpp` to show the `false` return path.
- Address the `GetItem`/`NULL` ambiguity noted above.

## Built With
- C++11
