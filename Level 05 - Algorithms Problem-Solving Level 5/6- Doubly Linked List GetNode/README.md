# Doubly Linked List - GetNode

## Requirements

Extend the `clsDblLinkedList` class from the previous stage by adding a method to retrieve a node by its position (index):

1. Add a public method **GetNode(int Index)** that returns a pointer to the node at the given zero-based index.
2. If `Index` is out of range (negative, or greater than `_Size - 1`), return `NULL`.
3. Otherwise, traverse the list from `head`, counting nodes, until the target index is reached, and return that node.

All previous operations (Insert at Beginning/End/After, Find, Print, Delete Node/First/Last, Size, IsEmpty, Clear, Reverse) remain in place.

## Files

- `clsDblLinkedList.h` — The doubly linked list class with the new `GetNode(int Index)` method.
- `main.cpp` — A driver program that inserts 5 values, prints the list, retrieves the node at index 1 using `GetNode`, and prints its value.

## Notes

- `PrintList()` in this stage still calls `delete Current;` after the traversal loop, where `Current` is `NULL` — a harmless but unnecessary no-op, carried over from earlier stages.
