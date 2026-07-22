<table align="center" width="100%" border="1">
  <tr>
    <td align="center">
      <h2>Doubly Linked List — Update 02: IsEmpty Check</h2>
    </td>
  </tr>
</table>

---

## 📌 Description

An extension of [Update 01: Node Count Tracking](../Project%20-%2001%20-%20Update%20-%2001%20-%20Node-Count-Tracking). This update adds a quick way to check whether the list currently holds any nodes, built on top of the existing `_Size` counter.

---

## ✨ What's New in This Update

- Added a new `IsEmpty()` function that returns `true` if `_Size == 0`, and `false` otherwise
- `main.cpp` now checks and prints whether the list is empty **before** any insertions, and again **after** the insertions, to demonstrate the state change

---

## 🗂️ Project Structure

| Function | Responsibility |
|---|---|
| `InsertAtBeginning(T value)` | Creates a new node, makes it the new head, and increments `_Size` |
| `InsertAfter(Node* current, T value)` | Inserts a new node after a given node and increments `_Size` |
| `InsertAtEnd(T value)` | Appends a new node at the end and increments `_Size` |
| `Find(T Value)` | Traverses the list and returns a pointer to the first matching node, or `NULL` |
| `DeleteNode(Node*& NodeToDelete)` | Removes a specific node and decrements `_Size` |
| `DeleteFirstNode()` | Removes the head node and decrements `_Size` |
| `DeleteLastNode()` | Removes the last node and decrements `_Size` |
| `Size()` | Returns the current number of nodes in the list |
| `IsEmpty()` *(new)* | Returns `true` if the list has no nodes (`_Size == 0`), `false` otherwise |
| `PrintList()` | Prints all node values from head to tail |

---

## 🔁 Program Flow

1. An empty `clsDblLinkedList<int>` is created.
2. `IsEmpty()` is checked immediately — the program reports the list is empty.
3. Five values (`5, 4, 3, 2, 1`) are inserted at the beginning, resulting in the list `1 2 3 4 5`.
4. The list is printed, and its size is printed via `Size()`.
5. `IsEmpty()` is checked again — the program now reports the list is **not** empty.

---

## 💻 Sample Input

No user input is required — `main.cpp` drives the demo with hardcoded operations.

---

## 🖥️ Sample Output

```
Yes List is Empty.

Linked List Contenet:
1 2 3 4 5

Number of items in the linked list = 5

No List is not Empty.
```

---

## 🧠 Concepts Practiced

- Deriving boolean state (`IsEmpty`) from existing internal state (`_Size`) instead of re-checking `head == NULL` directly
- Testing a data structure's behavior at both boundary states (empty vs. populated)

---

## ▶️ How to Run

1. Open the project in Visual Studio (or any C++ IDE).
2. Make sure `main.cpp` and `clsDblLinkedList.h` are in the same project/folder.
3. Build and run — the program will report the list's empty state before and after populating it.

---

## 📚 What I Learned

- How small, focused helper functions (like `IsEmpty()`) built on top of existing state can make calling code more readable than repeating raw condition checks everywhere
- The value of testing a data structure at its edge cases (empty list) as well as its normal/populated state

---

## ⚠️ Known Issues

- `PrintList()` still calls `delete Current;` right after the traversal loop, where `Current` is always `NULL` at that point — a harmless but pointless line carried over from the base version (see Update 01's Known Issues).
- `IsEmpty()` uses a verbose ternary (`_Size == 0 ? true : false`) where the condition itself is already a `bool` — `return _Size == 0;` would be equivalent and simpler. Not a functional bug, just a style nitpick.

---

## 🚀 Future Improvements

- Simplify `IsEmpty()` to `return _Size == 0;`
- Remove the pointless `delete Current;` line from `PrintList()`.
- Add a destructor that properly frees all remaining nodes when the list object is destroyed.
- Add a null-check for the `current` parameter inside `InsertAfter()` for defensive safety.

---

## 🛠️ Built With

- C++ (templates)
- Standard Library: `iostream`
