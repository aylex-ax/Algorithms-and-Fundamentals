# Doubly Linked List - Size

## Requirements

Extend the `clsDblLinkedList` class from the previous stage by adding the ability to track and report the number of nodes currently in the list:

1. Add a protected member `_Size` that is initialized to `0`.
2. Increment `_Size` inside every insertion operation (`InsertAtBeginning`, `InsertAfter`, `InsertAtEnd`).
3. Decrement `_Size` inside every deletion operation (`DeleteNode`, `DeleteFirstNode`, `DeleteLastNode`).
4. Add a public method **Size()** that returns the current value of `_Size`.

All core operations from the previous stage (Insert at Beginning/End/After, Find, Print, Delete Node/First/Last) remain in place.

## Files

- `clsDblLinkedList.h` — The doubly linked list class with `_Size` tracking and the new `Size()` method.
- `main.cpp` — A driver program that inserts 5 values into the list, prints the list, then prints the number of items using `Size()`.

## Notes

- `_Size` is kept in sync manually at every insert/delete call site, rather than being computed by traversal — this makes `Size()` an O(1) operation.
- `PrintList()` in this stage calls `delete Current;` after the traversal loop, where `Current` is `NULL` at that point. Deleting a `NULL` pointer is safe in C++ (it's a no-op), but the line is unnecessary/confusing since nothing meaningful is being freed.
