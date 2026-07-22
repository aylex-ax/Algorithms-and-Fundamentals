# Project 1 — Doubly Linked List — Update 03: Clear List

## Description
This update extends the `clsDblLinkedList` class with a `Clear()` function that empties the entire list, removing all nodes and resetting the list to its initial (empty) state.

## Features
- **Clear()** — repeatedly removes the first node of the list until it is empty, deallocating every node.
- Reuses the existing `DeleteFirstNode()` logic instead of duplicating traversal/deletion code.
- After `Clear()`, `Size()` correctly reports 0 and `IsEmpty()` returns `true`.

## Project Structure

| Function | Responsibility |
|---|---|
| `InsertAtBeginning(T value)` | Inserts a new node at the head of the list |
| `InsertAfter(Node* current, T value)` | Inserts a new node after a given node |
| `InsertAtEnd(T value)` | Inserts a new node at the tail of the list |
| `PrintList()` | Prints all values in the list from head to tail |
| `Find(T Value)` | Returns a pointer to the first node matching a value |
| `DeleteNode(Node*& NodeToDelete)` | Removes a specific node from the list |
| `DeleteFirstNode()` | Removes the head node |
| `DeleteLastNode()` | Removes the tail node |
| `Size()` | Returns the current node count (`_Size`) |
| `IsEmpty()` | Returns whether the list has zero nodes |
| **`Clear()`** | **New in this update** — empties the list by repeatedly calling `DeleteFirstNode()` |

## Program Flow
1. Five values are inserted at the beginning of the list (`5, 4, 3, 2, 1`).
2. The list is printed and its size is displayed.
3. `Clear()` is called, removing every node one by one via `DeleteFirstNode()`.
4. The size is displayed again to confirm the list is now empty (`0`).

## Sample Input/Output
```
Linked List Contenet:
1 2 3 4 5
Number of items in the linked list = 5
Executing .Clear()
Number of items in the linked list = 0
```

## Concepts Practiced
- Doubly linked list memory management (allocation/deallocation).
- Function reuse/composition (`Clear()` built on top of `DeleteFirstNode()` instead of writing new traversal logic).
- Maintaining an internal size counter consistently across all mutating operations.

## How to Run
1. Place `main.cpp` and `clsDblLinkedList.h` in the same folder.
2. Compile with any C++11+ compiler, e.g.:
   ```
   g++ main.cpp -o DblLinkedList
   ```
3. Run the produced executable.

## What I Learned
- How to safely empty a linked list node-by-node without leaking memory.
- The value of reusing an existing, already-tested function (`DeleteFirstNode`) to implement a new feature safely.

## Known Issues
- ⚠️ `PrintList()` still calls `delete Current;` right after the traversal loop, where `Current` is always `NULL` at that point. This is a harmless no-op (deleting a `NULL` pointer is safe in C++) but is dead/unnecessary code. Carried over unchanged from the base version and Updates 01–02.

## Future Improvements
- Remove the pointless `delete Current;` call in `PrintList()`.
- Add a destructor that calls `Clear()` automatically to prevent memory leaks when a list object goes out of scope.

## Built With
- C++ (C++11 or later)
- Standard Template concepts (class templates, in this case `template <class T>`)
