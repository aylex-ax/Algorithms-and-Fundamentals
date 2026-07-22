<table align="center" width="100%" border="1">
  <tr>
    <td align="center">
      <h2>Doubly Linked List</h2>
    </td>
  </tr>
</table>

---

## 📌 Description

A generic (template-based) Doubly Linked List implemented from scratch in C++, supporting insertion at the beginning, insertion after a given node, insertion at the end, searching by value, and deletion (by node, first node, or last node). This is the base implementation of Project 1 — later updates in this series extend it with additional operations.

---

## ✨ Features

- Generic implementation using C++ templates — works with any data type (`int`, `string`, custom structs, etc.)
- Insert a new node at the beginning of the list
- Insert a new node after a given existing node
- Insert a new node at the end of the list
- Search for a node by value
- Delete a specific node (by reference)
- Delete the first node
- Delete the last node
- Print the entire list from head to tail

---

## 🗂️ Project Structure

| Function | Responsibility |
|---|---|
| `InsertAtBeginning(T value)` | Creates a new node and makes it the new head of the list |
| `InsertAfter(Node* current, T value)` | Inserts a new node right after a given node |
| `InsertAtEnd(T value)` | Traverses to the last node and appends a new node after it |
| `Find(T Value)` | Traverses the list and returns a pointer to the first node matching the given value, or `NULL` if not found |
| `DeleteNode(Node*& NodeToDelete)` | Removes a specific node from the list by relinking its neighbors |
| `DeleteFirstNode()` | Removes the head node and updates the head pointer |
| `DeleteLastNode()` | Traverses to the node before the last one and removes the last node |
| `PrintList()` | Prints all node values from head to tail |

---

## 🔁 Program Flow

1. An empty `clsDblLinkedList<int>` is created.
2. Five values (`5, 4, 3, 2, 1`) are inserted at the beginning, one after another, resulting in the list `1 2 3 4 5`.
3. The list is printed to show its current content.
4. `Find(2)` is used to locate the node with value `2`; the program reports whether it was found.
5. `InsertAfter` inserts `500` right after the found node, then the list is printed again.
6. `InsertAtEnd` appends `700` to the end of the list, then the list is printed again.
7. `Find(4)` locates the node with value `4`, and `DeleteNode` removes it; the list is printed again.
8. `DeleteFirstNode` removes the current head, then the list is printed again.
9. `DeleteLastNode` removes the current tail, then the final list is printed.

---

## 💻 Sample Input

No user input is required — `main.cpp` drives the demo with hardcoded operations.

---

## 🖥️ Sample Output

```
Linked List Contenet:
1 2 3 4 5

Node with value 2 is Found :-)

After Inserting 500 after 2:
1 2 500 3 4 5

After Inserting 700 at end:
1 2 500 3 4 5 700

After Deleting 4:
1 2 500 3 5 700

After Deleting First Node:
2 500 3 5 700

After Deleting Last Node:
2 500 3 5
```

---

## 🧠 Concepts Practiced

- Doubly linked list data structure (nodes with `next` and `prev` pointers)
- C++ class templates (generic programming)
- Dynamic memory allocation with `new` / `delete`
- Pointer manipulation and re-linking neighboring nodes
- Nested classes (`Node` defined inside `clsDblLinkedList`)
- Pass-by-reference for pointers (`Node*&` in `DeleteNode`)

---

## ▶️ How to Run

1. Open the project in Visual Studio (or any C++ IDE).
2. Make sure `main.cpp` and `clsDblLinkedList.h` are in the same project/folder.
3. Build and run — the program will execute the hardcoded demo sequence and print the list after each operation.

---

## 📚 What I Learned

- How to build a doubly linked list from scratch, including correctly maintaining both `next` and `prev` pointers on every insertion and deletion
- How to write generic, reusable data structures using C++ templates
- How to safely delete a node from the middle, beginning, or end of a list without breaking the chain
- How pass-by-reference (`Node*&`) allows a function to safely update a caller's pointer

---

## ⚠️ Known Issues

- None identified in this base version — all core operations (insert, find, delete) behave correctly for the demonstrated cases.

---

## 🚀 Future Improvements

- Add a null-check for the `current` parameter inside `InsertAfter()` so calling it with a non-existent node (e.g. a failed `Find()` result) fails gracefully instead of crashing.
- Add a destructor to free all remaining nodes when the list object goes out of scope (currently no cleanup on destruction).
- Add a `Size()` / `Count()` function to track the number of nodes.
- Add reverse traversal / printing (from tail to head), taking advantage of the `prev` pointers.

---

## 🛠️ Built With

- C++ (templates)
- Standard Library: `iostream`
