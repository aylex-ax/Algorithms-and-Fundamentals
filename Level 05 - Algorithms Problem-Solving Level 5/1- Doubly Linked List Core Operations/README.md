# Doubly Linked List - Core Operations

## Requirements

Implement a generic (templated) `clsDblLinkedList` class that represents a **doubly linked list**, supporting the following core operations:

1. **InsertAtBeginning(T value)** — Insert a new node at the head of the list.
2. **PrintList()** — Print all values in the list from head to tail.
3. **Find(T value)** — Search the list for a node with the given value and return a pointer to it (or `NULL` if not found).
4. **InsertAfter(Node* current, T value)** — Insert a new node immediately after a given node.
5. **InsertAtEnd(T value)** — Insert a new node at the tail of the list.
6. **DeleteNode(Node*& nodeToDelete)** — Delete a specific node from the list, correctly relinking its neighbors.
7. **DeleteFirstNode()** — Delete the first (head) node of the list.
8. **DeleteLastNode()** — Delete the last (tail) node of the list.

Each node stores a `value`, a pointer to the `next` node, and a pointer to the `prev` node, so the list can be traversed in both directions.

## Files

- `clsDblLinkedList.h` — The templated doubly linked list class with the operations above.
- `main.cpp` — A driver program that builds a list, inserts values, searches for a node, inserts after/at the end, and deletes nodes (first, last, and a specific node), printing the list after each step.

## Notes

- The list keeps a single `head` pointer; the tail is found by traversal when needed (e.g., in `InsertAtEnd` and `DeleteLastNode`).
- `DeleteNode` updates the `head` pointer if the node being deleted is the current head, and relinks the `prev`/`next` pointers of its neighbors before deleting it.
