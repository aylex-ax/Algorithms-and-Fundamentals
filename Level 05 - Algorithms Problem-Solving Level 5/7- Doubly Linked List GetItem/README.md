# Doubly Linked List - GetItem

## Requirements

Extend the `clsDblLinkedList` class from the previous stage by adding a method to retrieve the **value** stored at a given position (index), instead of the node pointer itself:

1. Add a public method **GetItem(int Index)** that calls `GetNode(Index)` internally.
2. If the returned node is `NULL` (index out of range), return `NULL`.
3. Otherwise, return the node's `value`.

All previous operations (Insert at Beginning/End/After, Find, Print, Delete Node/First/Last, Size, IsEmpty, Clear, Reverse, GetNode) remain in place.

## Files

- `clsDblLinkedList.h` — The doubly linked list class with the new `GetItem(int Index)` method.
- `main.cpp` — A driver program that inserts 5 values, prints the list, then prints the value at index 2 using `GetItem`.

## Notes

- `GetItem` returns `NULL` when the index is invalid. Since the return type is the generic `T`, this only compiles cleanly for types like `int` (where `NULL` is treated as `0`); it would not compile for a type such as `std::string`.
- `PrintList()` in this stage still calls `delete Current;` after the traversal loop, where `Current` is `NULL` — a harmless but unnecessary no-op, carried over from earlier stages.
