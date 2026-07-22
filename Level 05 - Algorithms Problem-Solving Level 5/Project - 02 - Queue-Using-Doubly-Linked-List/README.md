# Project 2 — Queue Using Doubly Linked List

## Description
A **Queue** (FIFO — First In, First Out) data structure implemented as a thin wrapper (`clsMyQueue`) around the `clsDblLinkedList` class built in Project 1.

Instead of reimplementing node-based storage from scratch, the queue delegates every operation to the underlying doubly linked list, exposing only queue-appropriate operations to the user.

## Features
- `push(T Item)` — adds an item to the back of the queue.
- `pop()` — removes the item at the front of the queue.
- `front()` — returns the value at the front of the queue without removing it.
- `back()` — returns the value at the back of the queue without removing it.
- `Size()` — returns the current number of items.
- `IsEmpty()` — checks whether the queue is empty.
- `Print()` — prints all items in the queue, front to back.

## Project Structure

| File | Responsibility |
|---|---|
| `clsDblLinkedList.h` | Project 1's doubly linked list (unchanged), used internally for storage. |
| `clsMyQueue.h` | Queue class — wraps a `clsDblLinkedList<T>` and exposes FIFO-style operations. |
| `main.cpp` | Demo: pushes 5 items, prints the queue, reads size/front/back, pops one item, prints again. |

| Queue Function | Underlying List Call |
|---|---|
| `push` | `InsertAtEnd` |
| `pop` | `DeleteFirstNode` |
| `front` | `GetItem(0)` |
| `back` | `GetItem(Size() - 1)` |
| `Size` | `Size()` |
| `IsEmpty` | `IsEmpty()` |
| `Print` | `PrintList()` |

## Program Flow
1. Five integers (10, 20, 30, 40, 50) are pushed into the queue.
2. The queue is printed, then its size, front, and back values are shown.
3. `pop()` removes the front item (10).
4. The queue is printed again to show the result.

## Sample Input/Output
```
Queue:
10 20 30 40 50

Queue Size: 5
Queue Front: 10
Queue Back: 50

Queue after pop() :
20 30 40 50
```

## Concepts Practiced
- Composition over inheritance: building a new data structure (Queue) by wrapping an existing one (Doubly Linked List) instead of duplicating its logic.
- Restricting a general-purpose structure's interface down to a specific, well-defined contract (FIFO operations only).
- Reusing previously built, tested components across projects.

## How to Run
1. Keep `clsDblLinkedList.h` and `clsMyQueue.h` in the same folder as `main.cpp`.
2. Compile `main.cpp` with a C++11 (or later) compiler.
3. Run the executable.

## What I Learned
- How wrapping an existing data structure is often simpler and safer than building a new one from scratch, as long as the underlying structure already supports the needed operations.

## ⚠️ Known Issues
- `front()` and `back()` rely on `GetItem`, which returns `NULL` (i.e. `0` for `int`) if called on an empty queue instead of signaling an error — calling `front()`/`back()` on an empty queue silently returns `0` rather than failing safely.
- Inherited from Project 1's `clsDblLinkedList`: `PrintList()` still calls `delete Current;` right after the loop, where `Current` is always `NULL` — harmless but dead code.

## Future Improvements
- Add empty-queue checks (or exceptions) in `front()`/`back()`/`pop()` before delegating to the underlying list.

## Built With
- C++11
