# Doubly Linked List - UpdateItem

## Requirements

Extend the `clsDblLinkedList` class from the previous stage by adding a method to update the value stored at a given position (index):

1. Add a public method **UpdateItem(int Index, T NewValue)** that calls `GetNode(Index)` internally.
2. If the node exists, set its `value` to `NewValue` and return `true`.
3. If the index is out of range (node is `NULL`), return `false`.

All previous operations (Insert at Beginning/End/After, Find, Print, Delete Node/First/Last, Size, IsEmpty, Clear, Reverse, GetNode, GetItem) remain in place.

## Files

- `clsDblLinkedList.h` — The doubly linked list class with the new `UpdateItem(int Index, T NewValue)` method.
- `main.cpp` — A driver program that inserts 5 values, prints the list, updates the item at index 2 to `500`, then prints the list again to show the change.

## Notes

- `PrintList()` in this stage still calls `delete Current;` after the traversal loop, where `Current` is `NULL` — a harmless but unnecessary no-op, carried over from earlier stages.
