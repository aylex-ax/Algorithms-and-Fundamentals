# Project 6 — Stack Using Dynamic Array (via Queue Inheritance)

## Description
A stack (LIFO) implementation built by publicly inheriting from Project 5's `clsMyQueueArr<T>`. Rather than writing a new storage layer, `clsMyStackArr<T>` reuses the queue's array-backed storage and overrides a single method — `push` — to flip insertion order from "add at the end" (queue/FIFO) to "add at the beginning" (stack/LIFO). `Top()` and `Bottom()` are then just renamed calls to the inherited `front()`/`back()`.

## Features
- LIFO push/pop semantics reusing the queue's existing storage and `pop()` unchanged
- `Top()` / `Bottom()` — peek at the most-recently-pushed / least-recently-pushed element
- All of `clsMyQueueArr`'s other operations remain available and correctly reinterpreted for a stack: `GetItem`, `UpdateItem`, `Reverse`, `Clear`, `InsertAfter`, `InsertAtFront` (insert at top), `InsertAtBack` (insert at bottom)
- Generic/templated design — works with any type `T`

## Project Structure

| File | Responsibility |
|---|---|
| `clsDynamicArray.h` | Generic dynamic array — unchanged from Project 5, owns the raw storage and all low-level operations. |
| `clsMyQueueArr.h` | Queue wrapper — unchanged from Project 5, provides the base FIFO interface that the stack inherits and partially overrides. |
| `clsMyStackArr.h` | Stack (`clsMyStackArr<T>`) — publicly inherits `clsMyQueueArr<T>`; overrides `push` to insert at the beginning instead of the end, adds `Top()` and `Bottom()`. |
| `main.cpp` | Driver program exercising every stack operation on a sample `int` stack. |

### `clsMyStackArr<T>` — key members
| Member | Responsibility |
|---|---|
| `push` (override) | Insert the new item at the front of the underlying array (`InsertAtBeginning`) instead of the end, so the most recently pushed item is always at index 0. |
| `pop` (inherited) | Removes the item at index 0 — since `push` always inserts at the front, this correctly removes the most recently pushed item. |
| `Top` | Returns `front()` — the most recently pushed item. |
| `Bottom` | Returns `back()` — the least recently pushed item still in the stack. |
| `Print`, `Size`, `IsEmpty`, `GetItem`, `UpdateItem`, `Reverse`, `Clear`, `InsertAfter`, `InsertAtFront`, `InsertAtBack` | Inherited directly from `clsMyQueueArr`, unchanged. |

## Program Flow
1. Five integers are pushed onto the stack (`10, 20, 30, 40, 50`); since `push` inserts at the front each time, the array ends up as `50 40 30 20 10` — 50 (last pushed) sits at the top.
2. The stack is printed, then `Size`, `Top`, and `Bottom` are reported.
3. `pop()` removes the top element (index 0); the stack is printed again.
4. `GetItem(2)` reads an element by index.
5. `Reverse()` flips the stack order.
6. `UpdateItem(2, 600)` overwrites an element.
7. `InsertAfter(2, 800)` inserts a new element after index 2.
8. `InsertAtFront(1000)` (new top) and `InsertAtBack(2000)` (new bottom) insert at the edges.
9. `Clear()` empties the stack.

## Sample Input/Output
```
Stack:
50 40 30 20 10

Stack Size: 5
Stack Top: 50
Stack Bottom: 10

Stack after pop() :
40 30 20 10

 Item(2) : 20

Stack after reverse() :
10 20 30 40

Stack after updating Item(2) to 600 :
10 20 600 40

Stack after Inserting 800 after Item(2) :
10 20 600 800 40

Stack after Inserting 1000 at top:
1000 10 20 600 800 40

Stack after Inserting 2000 at bottom:
1000 10 20 600 800 40 2000

Stack after Clear():

```
(Output verified by compiling and running the delivered code.)

## Concepts Practiced
- Reusing a base class (`clsMyQueueArr`) via public inheritance to build a related but semantically different ADT (LIFO vs. FIFO)
- Overriding a single method to change container semantics without touching the underlying storage class
- Class templates / generic programming
- Dynamic memory management with `new[]` / `delete[]` (inherited from `clsDynamicArray`)

## How to Run
1. Ensure `clsDynamicArray.h`, `clsMyQueueArr.h`, `clsMyStackArr.h`, and `main.cpp` are in the same folder.
2. Compile: `g++ -std=c++17 main.cpp -o stack_array`
3. Run: `./stack_array` (on Windows, the original `system("pause>0")` call keeps the console open).

## What I Learned
- How a stack can be derived from a queue by changing only where new elements are inserted, without duplicating any of the underlying storage logic.
- How public inheritance lets a derived class reinterpret an existing interface (`front`/`back` become `Top`/`Bottom`) while reusing the base's implementation as-is.

## Known Issues
`clsMyStackArr` and `clsMyQueueArr` are unchanged from Project 5, and `clsDynamicArray.h` is unchanged since the end of Project 4, so all previously identified issues in the storage layer carry over unresolved:
- `SetItem` has no check for a negative index.
- `Resize` does not clamp a negative `NewSize` to 0.
- `GetItem` has no bounds checking at all — `Top()`/`Bottom()` call `front()`/`back()`, which call `GetItem` directly with no `IsEmpty()` guard, so calling either on an empty stack is undefined behavior.
- `DeleteFirstItem` (used by `pop()`) ignores `DeleteItemAt`'s success/failure `bool` — popping an empty stack silently no-ops instead of reporting failure.
- `Find` only returns the first matching index, so `DeleteItem` can't target later duplicates of the same value.
- `InsertAt`'s index parameter is typed `T` instead of `int` — only works correctly here because `T = int`.
- `InsertBefore(index, value)` still calls `InsertAt(index - 1, value)` instead of `InsertAt(index, value)` — the off-by-one bug confirmed by execution in Project 4 Update 07 (not exercised by this `main.cpp`).
- `InsertAfter`'s out-of-range fallback calls `InsertAt(_Size - 1, value)` instead of `InsertAt(_Size, value)` (not exercised here; only called with an in-range index).
- `_TempArray` is a member variable reused as scratch space across multiple methods rather than a local variable — a design smell, not currently a functional bug.

No new issues specific to `clsMyStackArr` itself — `push`, `Top`, and `Bottom` behave correctly for the delivered test case.

## Future Improvements
- Add bounds checks to `GetItem`/`SetItem`, and an `IsEmpty()` guard in `Top()`/`Bottom()` (inherited from `front()`/`back()`).
- Fix the `InsertBefore` off-by-one and the `InsertAfter` out-of-range fallback at the source (`clsDynamicArray`).
- Change `InsertAt`/`InsertBefore`/`InsertAfter` index parameters to `int` instead of `T`.
- Make `pop()` return a `bool` (or throw) so callers can detect popping an empty stack.

## Built With
- C++ (templates, inheritance, dynamic memory management)
- Standard I/O (`iostream`)
