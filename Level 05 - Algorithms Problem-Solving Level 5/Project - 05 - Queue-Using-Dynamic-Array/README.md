# Project 5 — Queue Using Dynamic Array

## Description
A queue (FIFO) implementation built on top of a generic dynamic array (`clsDynamicArray<T>`). Instead of composing a doubly linked list (as in Project 2), the queue here wraps a resizable array and delegates all storage operations to it. The array class provides full CRUD-style functionality (insert, delete, search, resize, reverse), and the queue class exposes a FIFO-oriented interface on top of it.

## Features
- Standard queue operations: `push`, `pop`, `front`, `back`, `Size`, `IsEmpty`, `Print`
- Extended operations inherited from the underlying array: `GetItem`, `UpdateItem`, `InsertAfter`, `InsertAtFront`, `InsertAtBack`, `Reverse`, `Clear`
- Generic/templated design — works with any type `T`
- Underlying `clsDynamicArray<T>` supports resizing, searching (`Find`), deletion by index/value, and insertion before/after/at any index

## Project Structure

| File | Responsibility |
|---|---|
| `clsDynamicArray.h` | Generic dynamic array — owns the raw storage and all low-level operations (resize, insert, delete, find, reverse, clear). |
| `clsMyQueueArr.h` | Queue wrapper (`clsMyQueueArr<T>`) — composes a `clsDynamicArray<T>` internally and exposes queue-style operations. |
| `main.cpp` | Driver program exercising every queue operation on a sample `int` queue. |

### `clsDynamicArray<T>` — key members
| Member | Responsibility |
|---|---|
| `SetItem` / `GetItem` | Write/read a value at an index |
| `Size` / `IsEmpty` | Report current element count / emptiness |
| `PrintList` | Print all elements |
| `Resize` | Grow/shrink the backing array |
| `Reverse` | Reverse element order in place |
| `Clear` | Empty the array |
| `Find` | Return the index of the first match, or -1 |
| `DeleteItemAt` / `DeleteFirstItem` / `DeleteLastItem` / `DeleteItem` | Remove by index / position / value |
| `InsertAt` / `InsertAtBeginning` / `InsertBefore` / `InsertAfter` / `InsertAtEnd` | Insert at various positions |

### `clsMyQueueArr<T>` — key members
| Member | Responsibility |
|---|---|
| `push` / `pop` | Enqueue at the back / dequeue from the front |
| `front` / `back` | Peek at the first / last element |
| `Size` / `IsEmpty` / `Print` | Delegate directly to the underlying array |
| `GetItem` / `UpdateItem` | Read / overwrite an element by index |
| `Reverse` / `Clear` | Delegate to the underlying array |
| `InsertAfter` / `InsertAtFront` / `InsertAtBack` | Insert at various queue positions |

## Program Flow
1. Five integers are pushed onto the queue (`10, 20, 30, 40, 50`).
2. The queue is printed, then `Size`, `front`, and `back` are reported.
3. `pop()` removes the front element; the queue is printed again.
4. `GetItem(2)` reads an element by index.
5. `Reverse()` flips the queue order.
6. `UpdateItem(2, 600)` overwrites an element.
7. `InsertAfter(2, 800)` inserts a new element after index 2.
8. `InsertAtFront(1000)` and `InsertAtBack(2000)` insert at the edges.
9. `Clear()` empties the queue.

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
(Output verified by compiling and running the delivered code.)

## Concepts Practiced
- Class composition (`clsMyQueueArr` wraps `clsDynamicArray` rather than inheriting from it)
- Class templates / generic programming
- Dynamic memory management with `new[]` / `delete[]`
- Array resizing and element shifting for insertion/deletion
- FIFO queue semantics built on non-linked-list storage

## How to Run
1. Ensure `clsDynamicArray.h`, `clsMyQueueArr.h`, and `main.cpp` are in the same folder.
2. Compile: `g++ -std=c++17 main.cpp -o queue_array`
3. Run: `./queue_array` (on Windows, the original `system("pause>0")` call keeps the console open).

## What I Learned
- How to implement a queue on top of an array-based structure instead of a linked list, and the trade-offs (shifting elements vs. pointer relinking).
- How composition can be used to build a higher-level ADT (queue) out of a lower-level one (dynamic array) without exposing internal storage details.

## Known Issues
This queue reuses the same `clsDynamicArray<T>` class delivered in Project 4 (Update 07), so all of its unresolved issues carry over unchanged:
- `SetItem` has no check for a negative index.
- `Resize` does not clamp a negative `NewSize` to 0.
- `GetItem` has no bounds checking at all — since `front()` and `back()` call `GetItem` directly with no `IsEmpty()` guard, calling either on an empty queue is undefined behavior.
- `DeleteFirstItem` / `DeleteLastItem` (used by `pop()`) ignore `DeleteItemAt`'s success/failure `bool` — popping an empty queue silently no-ops instead of reporting failure.
- `Find` only returns the first matching index, so `DeleteItem` can't target later duplicates of the same value.
- `InsertAt`'s index parameter is typed `T` instead of `int` — only works correctly here because `T = int`; would misbehave for other element types.
- `InsertBefore(index, value)` still calls `InsertAt(index - 1, value)` instead of `InsertAt(index, value)` — the off-by-one bug confirmed by execution in Project 4 Update 07 (not exercised by this `main.cpp`, which never calls `InsertBefore`/the queue's equivalent).
- `InsertAfter`'s out-of-range fallback calls `InsertAt(_Size - 1, value)` instead of `InsertAt(_Size, value)` — doesn't behave like a true append in that edge case (not exercised here; the delivered `main.cpp` only calls it with an in-range index).
- `_TempArray` is a member variable reused as scratch space across multiple methods rather than a local variable — a design smell, though not currently a functional bug.

## Future Improvements
- Add bounds checks to `GetItem`/`SetItem`, and an `IsEmpty()` guard in `front()`/`back()`.
- Fix the `InsertBefore` off-by-one and the `InsertAfter` out-of-range fallback.
- Change `InsertAt`/`InsertBefore`/`InsertAfter` index parameters to `int` instead of `T`.
- Make `pop()` return a `bool` (or throw) so callers can detect popping an empty queue.

## Built With
- C++ (templates, dynamic memory management)
- Standard I/O (`iostream`)
