# Project 1 — Update 08: Insert After By Index

## Description
This update extends the `clsDblLinkedList` (Doubly Linked List) class with an overloaded `InsertAfter(int Index, T value)` function, allowing a new value to be inserted after a given **index** rather than after a `Node*` pointer directly.

This is the final update for Project 1, completing all 8 planned extensions to the Doubly Linked List.

## Features
- Insert a new value right after the node at a given index, using the index instead of a raw `Node*`.
- Reuses both `GetNode` (to locate the target node) and the existing pointer-based `InsertAfter(Node*, T)` (to perform the insertion).
- Returns a `bool` indicating whether the insertion succeeded (`true`) or the index was invalid (`false`).
- Demonstrates function overloading: the class now has two `InsertAfter` functions distinguished by parameter type (`Node*` vs `int`).

## Project Structure

| Function | Responsibility |
|---|---|
| `GetNode(int Index)` | Returns a pointer to the node at `Index` (from Update 05). |
| `InsertAfter(Node* current, T value)` | Original pointer-based insertion (from the base project). |
| `InsertAfter(int Index, T value)` | New overload: finds the node at `Index` via `GetNode`, then calls the pointer-based `InsertAfter`. |

## Program Flow
1. `main.cpp` builds a list of 5 integers using `InsertAtBeginning`.
2. The list is printed with `PrintList()`.
3. `InsertAfter(4, 500)` is called to insert `500` after the node at index 4.
4. The list is printed again to show the change.

## Sample Input/Output
```
Linked List Content:
1 2 3 4 5

After Insert:
1 2 3 4 5 500
```

## Concepts Practiced
- Function overloading (two functions with the same name, differentiated by parameter type).
- Delegating a new function to an existing one rather than duplicating logic (`InsertAfter(int, T)` calls `InsertAfter(Node*, T)`).
- Continued reuse of `GetNode` as the shared index-lookup building block across `GetItem`, `UpdateItem`, and now `InsertAfter`.

## How to Run
1. Include `clsDblLinkedList.h` in your project.
2. Compile `main.cpp` with a C++11 (or later) compiler.
3. Run the executable.

## What I Learned
- How overloading lets a class expose the same operation through two natural interfaces (by pointer, by index) while keeping the actual insertion logic in one place.

## ⚠️ Known Issues
- **`main.cpp` in this submission appears corrupted** — it's missing symbols throughout: `#` before `include`, quotes around `"clsDblLinkedList.h"`, angle brackets for `<int>`, all `<<` stream operators, string literal quotes (`"..."`), and the `>` in `"pause>0"`. As uploaded, this file will not compile. It's included as-is per the no-edit rule, but you may want to re-check/re-upload the original source file.
- Carried over from earlier updates: `PrintList()` still calls `delete Current;` right after the loop, where `Current` is always `NULL` at that point — harmless (delete on `NULL` is a no-op) but dead code.
- Carried over: `GetItem` still returns `NULL` on an invalid index, ambiguous with a real stored value of `0` for `int`-type lists.

## Future Improvements
- Re-verify/re-upload a clean copy of `main.cpp`.
- Address the `GetItem`/`NULL` ambiguity noted in earlier updates.

## Built With
- C++11
