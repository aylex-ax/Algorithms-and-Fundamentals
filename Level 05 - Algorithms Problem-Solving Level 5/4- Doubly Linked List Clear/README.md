# Doubly Linked List - Clear

## Requirements

Extend the `clsDblLinkedList` class from the previous stage by adding a method to remove all nodes from the list:

1. Add a public method **Clear()** that repeatedly calls `DeleteFirstNode()` while `_Size > 0`, until the list is completely empty.

All previous operations (Insert at Beginning/End/After, Find, Print, Delete Node/First/Last, Size, IsEmpty) remain in place.

## Files

- `clsDblLinkedList.h` — The doubly linked list class with the new `Clear()` method.
- `main.cpp` — A driver program that inserts 5 values, prints the list and its size, calls `Clear()`, then prints the size again (expecting `0`).

## Notes

- `Clear()` is implemented by reusing `DeleteFirstNode()` in a loop rather than manually walking and deleting nodes, keeping the deletion logic in one place.
- `PrintList()` in this stage still calls `delete Current;` after the traversal loop, where `Current` is `NULL` — a harmless but unnecessary no-op, carried over from earlier stages.
