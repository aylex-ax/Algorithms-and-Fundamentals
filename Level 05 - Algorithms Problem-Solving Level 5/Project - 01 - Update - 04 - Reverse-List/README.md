# Project 1 — Doubly Linked List — Update 04: Reverse List

## Description
This update extends the `clsDblLinkedList` class with a `Reverse()` function that reverses the order of the list in place, so the last node becomes the head and the first node becomes the tail.

## Features
- **Reverse()** — swaps the `next`/`prev` pointers of every node and updates `head` to point to what was previously the last node, all in a single traversal (no extra list/array needed).

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
| **`Reverse()`** | **New in this update** — reverses the list in place by swapping each node's `next`/`prev` pointers |

## Program Flow
1. Five values are inserted at the beginning of the list (`5, 4, 3, 2, 1`).
2. The list is printed in its original order.
3. `Reverse()` is called.
4. The list is printed again, now in reverse order.

## Sample Input/Output
```
Linked List Contenet:
1 2 3 4 5

Linked List Contenet after reverse:
5 4 3 2 1
```

## Concepts Practiced
- In-place pointer manipulation on a doubly linked list (swapping `next`/`prev` per node instead of rebuilding the list).
- Correctly relocating the `head` pointer after a structural transformation of the whole list.

## How to Run
1. Place `main.cpp` and `clsDblLinkedList.h` in the same folder.
2. Compile with any C++11+ compiler, e.g.:
   ```
   g++ main.cpp -o DblLinkedList
   ```
3. Run the produced executable.

## What I Learned
- How to reverse a doubly linked list in O(n) time and O(1) extra space by swapping pointers node-by-node rather than moving values.
- Why the new head must be derived from the last node visited (`temp->prev`) after the traversal, since `current` itself becomes `NULL` at the end of the loop.

## Known Issues
- ⚠️ `PrintList()` still calls `delete Current;` right after the traversal loop, where `Current` is always `NULL` at that point. This is a harmless no-op (deleting a `NULL` pointer is safe in C++) but is dead/unnecessary code. Carried over unchanged from the base version through Updates 01–03.

## Future Improvements
- Remove the pointless `delete Current;` call in `PrintList()`.
- Add a destructor that calls `Clear()` automatically to prevent memory leaks when a list object goes out of scope.

## Built With
- C++ (C++11 or later)
- Class templates (`template <class T>`)
