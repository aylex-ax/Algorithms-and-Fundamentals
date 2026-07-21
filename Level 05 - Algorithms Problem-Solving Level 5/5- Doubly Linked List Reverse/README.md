# Doubly Linked List - Reverse

## Requirements

Extend the `clsDblLinkedList` class from the previous stage by adding a method to reverse the order of the list in place:

1. Add a public method **Reverse()** that traverses the list, and for every node, swaps its `next` and `prev` pointers.
2. After the traversal, update `head` to point to what used to be the last node, so the list is now traversed in the opposite order.

All previous operations (Insert at Beginning/End/After, Find, Print, Delete Node/First/Last, Size, IsEmpty, Clear) remain in place.

## Files

- `clsDblLinkedList.h` — The doubly linked list class with the new `Reverse()` method.
- `main.cpp` — A driver program that inserts 5 values, prints the list, calls `Reverse()`, then prints the list again to show the reversed order.

## Notes

- `Reverse()` swaps `prev`/`next` for every node in a single pass, then relies on the last-visited node's (now-swapped) `prev` pointer to locate the new head.
- `PrintList()` in this stage still calls `delete Current;` after the traversal loop, where `Current` is `NULL` — a harmless but unnecessary no-op, carried over from earlier stages.
