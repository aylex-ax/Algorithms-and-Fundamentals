# Project 2 — Update 01: Extended Operations

## Description
This update extends the `clsMyQueue` class (a Queue built on top of the Doubly Linked List from Project 1) with seven additional operations that go beyond the standard Queue interface. These extensions add indexed access, in-place reversal, item updates, mid-queue insertion, front/back insertion, and clearing — turning the basic FIFO queue into a more flexible, list-like structure while keeping the original `push`/`pop` behavior intact.

## Features
**Base Queue Operations (carried over from the initial Queue):**
- `push(T Item)` — adds an item to the back of the queue.
- `pop()` — removes the item at the front of the queue.
- `Print()` — displays all queue items.
- `Size()` — returns the number of items.
- `IsEmpty()` — checks whether the queue is empty.
- `front()` — returns the item at the front.
- `back()` — returns the item at the back.

**New in this Update (Extensions #1–#7):**
- **Extension #1 — `GetItem(int Index)`**: retrieves the item at a given index.
- **Extension #2 — `Reverse()`**: reverses the order of items in the queue in place.
- **Extension #3 — `UpdateItem(int Index, T NewValue)`**: overwrites the value at a given index.
- **Extension #4 — `InsertAfter(int Index, T NewValue)`**: inserts a new item right after a given index.
- **Extension #5 — `InsertAtFront(T Value)`**: inserts a new item at the very front (bypasses standard FIFO order).
- **Extension #6 — `InsertAtBack(T Value)`**: inserts a new item at the very back (equivalent to `push`).
- **Extension #7 — `Clear()`**: removes all items from the queue.

## Project Structure

| Function | Responsibility |
|---|---|
| `push` | Insert item at the end of the underlying list |
| `pop` | Remove the first node of the underlying list |
| `Print` | Print all items via the underlying list |
| `Size` | Return current item count |
| `IsEmpty` | Return true if the list has no items |
| `front` | Return item at index 0 |
| `back` | Return item at index `Size()-1` |
| `GetItem` | Return item at a given index |
| `Reverse` | Reverse the underlying list in place |
| `UpdateItem` | Overwrite item at a given index |
| `InsertAfter` | Insert new item after a given index |
| `InsertAtFront` | Insert new item at the beginning |
| `InsertAtBack` | Insert new item at the end |
| `Clear` | Empty the entire list |

## Program Flow
1. Five integers are pushed into the queue.
2. The queue is printed, and its size, front, and back values are displayed.
3. `pop()` removes the front item, and the queue is printed again.
4. Each extension (#1–#7) is demonstrated in sequence: retrieving an item by index, reversing the queue, updating an item, inserting after an index, inserting at front, inserting at back, and finally clearing the queue — printing the queue's state after each step.

## Sample Input/Output
```
Queue:
10 20 30 40 50

Queue Size: 5
Queue Front: 10
Queue Back: 50

Queue after pop() :
20 30 40 50

 Item(2) : 40

Queue after reverse() :
50 40 30 20

Queue after updating Item(2) to 600 :
50 40 600 20

Queue after Inserting 800 after Item(2) :
50 40 600 800 20

Queue after Inserting 1000 at front:
1000 50 40 600 800 20

Queue after Inserting 2000 at back:
1000 50 40 600 800 20 2000

Queue after Clear():

```

## Concepts Practiced
- Extending an existing abstraction (Queue) with operations beyond its classic interface.
- Delegation/composition: `clsMyQueue` wraps `clsDblLinkedList` and forwards calls to it.
- Template classes (`template <class T>`) for type-generic containers.
- Index-based access and mutation layered on top of a linked list.

## How to Run
1. Ensure `clsDblLinkedList.h` (from Project 1) is present alongside these files.
2. Compile `main.cpp` with a C++11 (or later) compiler.
3. Run the resulting executable.

## What I Learned
- How to extend a container class with new capabilities without breaking its original interface.
- How indexed operations (get/update/insert-after) can be layered cleanly on a doubly linked list.

## Known Issues
- None identified in this update.

## Future Improvements
- Could add bounds-checking feedback (e.g., return a success/failure flag) for `GetItem`, `UpdateItem`, and `InsertAfter` when an invalid index is passed.

## Built With
- C++ (C++11 or later)
