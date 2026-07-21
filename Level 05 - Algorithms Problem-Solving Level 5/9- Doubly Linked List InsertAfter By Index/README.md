<table align="center" width="100%" border="1">
  <tr>
    <td align="center">
      <h2>Doubly Linked List — Update 01: Node Count Tracking</h2>
    </td>
  </tr>
</table>
---
📌 Description
An extension of the base Doubly Linked List project. This update adds automatic size tracking to the list, so the number of nodes can be retrieved in constant time without traversing the entire list.
---
✨ What's New in This Update
Added a protected `_Size` counter that tracks the current number of nodes in the list
`_Size` is incremented in every insertion function: `InsertAtBeginning()`, `InsertAfter()`, `InsertAtEnd()`
`_Size` is decremented in every deletion function: `DeleteNode()`, `DeleteFirstNode()`, `DeleteLastNode()`
Added a new `Size()` function that returns the current `_Size` (O(1) lookup instead of traversing the list)
`main.cpp` now prints the number of items in the list after populating it
---
🗂️ Project Structure
Function	Responsibility
`InsertAtBeginning(T value)`	Creates a new node, makes it the new head, and increments `_Size`
`InsertAfter(Node* current, T value)`	Inserts a new node after a given node and increments `_Size`
`InsertAtEnd(T value)`	Appends a new node at the end and increments `_Size`
`Find(T Value)`	Traverses the list and returns a pointer to the first matching node, or `NULL`
`DeleteNode(Node*& NodeToDelete)`	Removes a specific node and decrements `_Size`
`DeleteFirstNode()`	Removes the head node and decrements `_Size`
`DeleteLastNode()`	Removes the last node and decrements `_Size`
`Size()` (new)	Returns the current number of nodes in the list
`PrintList()`	Prints all node values from head to tail
---
🔁 Program Flow
An empty `clsDblLinkedList<int>` is created.
Five values (`5, 4, 3, 2, 1`) are inserted at the beginning, resulting in the list `1 2 3 4 5`.
The list is printed to show its current content.
`Size()` is called and its result is printed, confirming the node count is tracked correctly.
---
💻 Sample Input
No user input is required — `main.cpp` drives the demo with hardcoded operations.
---
🖥️ Sample Output
```
Linked List Contenet:
1 2 3 4 5

Number of items in the linked list = 5
```
---
🧠 Concepts Practiced
Maintaining auxiliary state (`_Size`) in sync with structural changes to a data structure
Encapsulation using a `protected` member with a public accessor (`Size()`)
Trade-off between O(1) size lookup (counter) vs. O(n) traversal-based counting
---
▶️ How to Run
Open the project in Visual Studio (or any C++ IDE).
Make sure `main.cpp` and `clsDblLinkedList.h` are in the same project/folder.
Build and run — the program will print the list content followed by its size.
---
📚 What I Learned
How to keep a derived value (`_Size`) consistent across every operation that changes the underlying structure, instead of recomputing it on demand
Why exposing state through a public method (`Size()`) while keeping the counter itself `protected` is better encapsulation than making the counter public directly
---
⚠️ Known Issues
`PrintList()` now calls `delete Current;` right after the traversal loop. At that point `Current` is always `NULL` (the loop only exits when `Current == NULL`), so this line has no actual effect — `delete` on a `NULL` pointer is safe in C++ but does nothing. It's dead/confusing code that should be removed, not a functional bug.
---
🚀 Future Improvements
Remove the pointless `delete Current;` line from `PrintList()`.
Add a destructor that properly frees all remaining nodes when the list object is destroyed.
Add a null-check for the `current` parameter inside `InsertAfter()` for defensive safety.
Add an `IsEmpty()` helper that checks `_Size == 0` (or `head == NULL`) for readability at call sites.
---
🛠️ Built With
C++ (templates)
Standard Library: `iostream`
