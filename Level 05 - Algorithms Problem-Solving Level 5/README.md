# Level 13 - Algorithms & Problem Solving Level 5

## Overview

This level focuses on **Data Structures**, specifically building a generic **Doubly Linked List** (`clsDblLinkedList`) from the ground up in C++. The class is developed incrementally across **9 problems**, with each stage adding one new capability on top of the previous one, until the list supports a full set of insertion, deletion, traversal, and index-based operations.

## Problems

| # | Folder | What's Added |
|---|--------|---------------|
| 1 | `1- Doubly Linked List Core Operations` | InsertAtBeginning, PrintList, Find, InsertAfter, InsertAtEnd, DeleteNode, DeleteFirstNode, DeleteLastNode |
| 2 | `2- Doubly Linked List Size` | `_Size` tracking + `Size()` |
| 3 | `3- Doubly Linked List IsEmpty` | `IsEmpty()` |
| 4 | `4- Doubly Linked List Clear` | `Clear()` |
| 5 | `5- Doubly Linked List Reverse` | `Reverse()` |
| 6 | `6- Doubly Linked List GetNode` | `GetNode(int Index)` |
| 7 | `7- Doubly Linked List GetItem` | `GetItem(int Index)` |
| 8 | `8- Doubly Linked List UpdateItem` | `UpdateItem(int Index, T NewValue)` |
| 9 | `9- Doubly Linked List InsertAfter By Index` | `InsertAfter(int Index, T value)` overload |

Each folder contains:
- `clsDblLinkedList.h` — the class definition for that stage.
- `main.cpp` — a driver program demonstrating the new functionality.
- `README.md` — requirements and notes specific to that stage.

## Concepts Covered

- Generic (templated) classes in C++
- Doubly linked list structure (head/tail traversal via `next`/`prev` pointers)
- Node insertion (at beginning, at end, after a node, after an index)
- Node deletion (specific node, first node, last node, clearing the whole list)
- List traversal and searching
- Index-based access and mutation (`GetNode`, `GetItem`, `UpdateItem`)
- In-place list reversal

## Known Issue

The `main.cpp` file in **Problem 9** (`InsertAfter By Index`) is corrupted — all `< >`, `"` characters and escape sequences were stripped from the source text, so it will not compile as-is. See that problem's individual `README.md` for details. This is pending a decision on whether to resupply a clean file or keep it as a reference-only note.

## Related Repository

Small standalone C++ practice projects (Projects 5-8), which are part of the same roadmap but are not part of this Data Structures level, are kept in a separate repository:

**[mostafa-000/CPP-Small-Projects](https://github.com/mostafa-000/CPP-Small-Projects)** — A collection of small C++ practice projects covering logic, functions, and basic problem-solving.
