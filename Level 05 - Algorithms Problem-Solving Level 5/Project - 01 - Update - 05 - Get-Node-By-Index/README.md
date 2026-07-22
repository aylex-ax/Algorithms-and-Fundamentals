# Project 1 — Doubly Linked List — Update 05: Get Node By Index

## Description
This update extends the `clsDblLinkedList` class with a `GetNode(int Index)` function that returns a pointer to the node located at a given zero-based index in the list.

## Features
- **GetNode(int Index)** — traverses the list from the head and returns a pointer to the node at the requested index.
- Bounds-checked: returns `NULL` if `Index` is negative or beyond the last valid index (`_Size - 1`).

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
| `Clear()` | Empties the list by repeatedly calling `DeleteFirstNode()` |
| `Reverse()` | Reverses the list in place |
| **`GetNode(int Index)`** | **New in this update** — returns a pointer to the node at a given zero-based index, or `NULL` if out of range |

## Program Flow
1. Five values are inserted at the beginning of the list (`5, 4, 3, 2, 1`), producing the list `1 2 3 4 5`.
2. The list is printed.
3. `GetNode(1)` is called to fetch the node at index 1.
4. The value stored in that node is printed.

## Sample Input/Output
```
Linked List Contenet:
1 2 3 4 5

Node Value is: 2
```

## Concepts Practiced
- Index-based traversal of a linked list (as opposed to value-based search like `Find()`).
- Defensive bounds checking against `_Size` before traversing.

## How to Run
1. Place `main.cpp` and `clsDblLinkedList.h` in the same folder.
2. Compile with any C++11+ compiler, e.g.:
   ```
   g++ main.cpp -o DblLinkedList
   ```
3. Run the produced executable.

## What I Learned
- How to translate a numeric index into a node pointer in a linked list, where — unlike an array — positions aren't directly addressable and must be reached by traversal.
- The importance of validating the index against the list's current size before searching, to avoid walking off the end of the list.

## Known Issues
- ⚠️ `PrintList()` still calls `delete Current;` right after the traversal loop, where `Current` is always `NULL` at that point. This is a harmless no-op (deleting a `NULL` pointer is safe in C++) but is dead/unnecessary code. Carried over unchanged from the base version through Updates 01–04.
- Note (not a functional bug): `GetNode()`'s traversal loop condition (`Current != NULL && Current->next != NULL`) combines the bounds check and the traversal step in a somewhat unconventional way — it happens to still return the correct node for every valid index (including the last one), but a simpler `for` loop counting up to `Index` would be more readable.

## Future Improvements
- Remove the pointless `delete Current;` call in `PrintList()`.
- Simplify `GetNode()`'s loop to a plain counted `for` loop for clarity.
- Add a destructor that calls `Clear()` automatically to prevent memory leaks when a list object goes out of scope.

## Built With
- C++ (C++11 or later)
- Class templates (`template <class T>`)
