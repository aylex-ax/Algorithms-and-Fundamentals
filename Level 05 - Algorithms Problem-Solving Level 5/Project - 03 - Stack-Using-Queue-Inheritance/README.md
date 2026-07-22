# Project 3: Stack (via Queue Inheritance)

## Description
This project implements a Stack (`clsMyStack`) by inheriting from `clsMyQueue` (Project 2) rather than building on the Doubly Linked List directly. Only the behavior that must differ between a Queue (FIFO) and a Stack (LIFO) is overridden; everything else is reused as-is from the parent class through inheritance.

## Features
**New/Overridden in this Project:**
- `push(T Item)` — overridden to insert at the **beginning** of the underlying list (instead of the end), giving LIFO order.
- `Top()` — returns the item at the top of the stack (delegates to the inherited `front()`).
- `Bottom()` — returns the item at the bottom of the stack (delegates to the inherited `back()`).

**Inherited unchanged from `clsMyQueue` (Project 2):**
- `pop()`, `Print()`, `Size()`, `IsEmpty()`
- `GetItem`, `Reverse`, `UpdateItem`, `InsertAfter`, `InsertAtFront`, `InsertAtBack`, `Clear`

## Project Structure

| Function | Responsibility |
|---|---|
| `push` | Insert item at the beginning of the underlying list (LIFO behavior) |
| `Top` | Return the item at the top of the stack (delegates to `front()`) |
| `Bottom` | Return the item at the bottom of the stack (delegates to `back()`) |
| *(all other functions)* | Inherited from `clsMyQueue` without modification |

## Program Flow
1. Five integers are pushed onto the stack (each new push lands at the top).
2. The stack is printed, and its size, top, and bottom values are displayed.
3. `pop()` removes the top item, and the stack is printed again.
4. The inherited operations (GetItem, Reverse, UpdateItem, InsertAfter, InsertAtFront, InsertAtBack, Clear) are exercised in sequence, printing the stack's state after each step.

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

## Concepts Practiced
- Class inheritance (`public` inheritance) to specialize a general container into a more specific one.
- Reusing a parent class's behavior while overriding only what differs (`push`) — an example of the Liskov-style "is-a" relationship (a Stack reusing Queue machinery).
- Accessing a protected base-class member (`_MyList`) directly from a derived class.

## How to Run
1. Ensure `clsMyQueue.h` (Project 2) and `clsDblLinkedList.h` (Project 1) are present alongside these files.
2. Compile `main.cpp` with a C++11 (or later) compiler.
3. Run the resulting executable.

## What I Learned
- How to build a new data structure (Stack) on top of an existing one (Queue) using inheritance instead of rewriting the underlying list logic.
- How overriding a single method (`push`) is enough to flip a Queue's FIFO behavior into a Stack's LIFO behavior.

## Known Issues
- None identified in this project.

## Future Improvements
- Consider hiding/removing Queue-specific naming (`InsertAtFront`/`InsertAtBack`) in favor of Stack-appropriate names, since a Stack doesn't conceptually have a "front"/"back" — only a "top"/"bottom".

## Built With
- C++ (C++11 or later)
