# Doubly Linked List - InsertAfter By Index

## Requirements

Extend the `clsDblLinkedList` class from the previous stage by adding an overload of `InsertAfter` that works by index instead of by node pointer:

1. Add a public method **InsertAfter(int Index, T value)** that calls `GetNode(Index)` internally.
2. If the node at that index exists, call the existing `InsertAfter(Node* current, T value)` overload to insert the new value after it, and return `true`.
3. If the index is out of range (node is `NULL`), return `false`.

This is an overload of the `InsertAfter` method already present since the first stage (which takes a `Node*`), so the class now supports inserting after either a node pointer or an index.

All previous operations (Insert at Beginning/End/After by node, Find, Print, Delete Node/First/Last, Size, IsEmpty, Clear, Reverse, GetNode, GetItem, UpdateItem) remain in place.

## Files

- `clsDblLinkedList.h` — The doubly linked list class with the new `InsertAfter(int Index, T value)` overload. This file is intact and compiles correctly.
- `main.cpp` — A driver program intended to insert 5 values, print the list, insert a value after index 4, and print the list again.

## Known Issue

**`main.cpp` in this stage is corrupted and will not compile as-is.** All angle brackets (`< >`), double quotes (`"`), and escape sequences (`\n`) have been stripped from the text, for example:

- `#include iostream` instead of `#include <iostream>`
- `#include clsDblLinkedList.h` instead of `#include "clsDblLinkedList.h"`
- `clsDblLinkedList int MydblLinkedList;` instead of `clsDblLinkedList<int> MydblLinkedList;`
- `cout  nLinked List Contenetn;` instead of `cout << "\nLinked List Contenet:\n";`
- `system(pause0);` instead of `system("pause>0");`

Per the project rule of never modifying submitted code, `main.cpp` has been kept exactly as received. **This needs a decision from Mostafa**: either resupply a clean version of this file, or keep it as-is with this note for reference (in which case it should not be treated as a working/compilable example).
