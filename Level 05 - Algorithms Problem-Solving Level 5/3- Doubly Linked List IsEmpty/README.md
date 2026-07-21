# Doubly Linked List - IsEmpty

## Requirements

Extend the `clsDblLinkedList` class from the previous stage by adding a method to check whether the list is empty:

1. Add a public method **IsEmpty()** that returns `true` if the list contains no nodes (`_Size == 0`), and `false` otherwise.
2. The check relies on the `_Size` counter maintained in the previous stage.

All previous operations (Insert at Beginning/End/After, Find, Print, Delete Node/First/Last, Size) remain in place.

## Files

- `clsDblLinkedList.h` — The doubly linked list class with the new `IsEmpty()` method.
- `main.cpp` — A driver program that checks `IsEmpty()` before inserting any values (expecting `true`), inserts 5 values, prints the list and its size, then checks `IsEmpty()` again (expecting `false`).

## Notes

- `PrintList()` in this stage still calls `delete Current;` after the traversal loop, where `Current` is `NULL` — a harmless but unnecessary no-op, carried over from the previous stage.
