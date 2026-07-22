# Level 05 — Algorithms Problem-Solving Level 5

## Overview
Level 05 moves from Level 04's single date/calendar library into a set of eight standalone data-structure and systems projects, each built and delivered as its own base implementation (no extension/update cycle, unlike Levels 01–04's problem sets). The level progresses from linked-list fundamentals up through composition/inheritance-based reuse, and finishes with a realistic small system (a ticket queue) built on top of the earlier data structures.

## Projects

| # | Project | Summary |
|---|---|---|
| 1 | **Doubly Linked List** | `clsDblLinkedList` — the level's foundational data structure. Delivered as a base plus 8 incremental updates: node counting, `IsEmpty`, `Clear`, `Reverse`, `GetNode`/`GetItem`, `UpdateItem`, and index-based `InsertAfter`. |
| 2 | **Queue Using Doubly Linked List** | `clsMyQueue` composes `clsDblLinkedList` to provide FIFO semantics (`push`/`pop`/`front`/`back`), later extended in one combined update with `GetItem`, `Reverse`, `UpdateItem`, `InsertAfter`, front/back insertion, and `Clear`. |
| 3 | **Stack Using Queue Inheritance** | `clsMyStack` publicly inherits `clsMyQueue`, overriding `push` to insert at the front and adding `Top()`/`Bottom()` — demonstrates deriving LIFO behavior from an existing FIFO class. |
| 4 | **Dynamic Array** | `clsDynamicArray` — a generic resizable array built from scratch with `new[]`/`delete[]`. Delivered as a base plus 7 updates covering resize, reverse, clear, deletion (by index/first/last/value), search, and insertion (at index/beginning/before/after/end). |
| 5 | **Queue Using Dynamic Array** | `clsMyQueueArr` — the same FIFO interface as Project 2, but composing `clsDynamicArray` instead of the linked list, delivered complete in one file. |
| 6 | **Stack Using Dynamic Array** | `clsMyStackArr` publicly inherits `clsMyQueueArr`, mirroring Project 3's inheritance pattern but on the array-backed queue. |
| 7 | **Undo/Redo String** | `clsMyString` — a string wrapper with full undo/redo history via two `std::stack<string>`, exposed through an MSVC property (`Value`). |
| 8 | **Ticket-Based Queue Line System** | `clsQueueLine` — the level's capstone: a `std::queue`-backed ticket system (private nested `clsTicket` class) with issue/serve tracking, expected-wait calculation, and two-directional line printing. Reuses Level 04's `clsDate` for timestamping. |

## Recurring Design Themes
- **Composition over duplication:** Projects 2, 5, and 8 all build a queue-like structure by wrapping an existing container (linked list, dynamic array, `std::queue`) rather than reimplementing storage.
- **Inheritance for behavioral variants:** Projects 3 and 6 both derive a stack from a queue by overriding a single method (`push`), reusing everything else unchanged.
- **Custom containers vs. STL containers:** Projects 1–6 build `clsDblLinkedList`/`clsDynamicArray` from scratch; Projects 7–8 switch to STL's `std::stack`/`std::queue` directly, showing both approaches within the same level.
- **Cross-level reuse:** Project 8 reuses Level 04's `clsDate` library unchanged, and Project 7 previews the same MSVC `__declspec(property)` pattern used throughout `clsDate`.

## Known Cross-Project Issues
Several issues in the shared `clsDynamicArray` class (used by Projects 4, 5, and 6) were never fixed once introduced and are documented in detail in each affected project's own README:
- No bounds checking on `GetItem`/`SetItem` for negative or out-of-range indices.
- `Resize` doesn't clamp a negative size to 0 (a regression from Project 4 Update 01).
- `InsertBefore` has a confirmed off-by-one bug (verified by execution in Project 4 Update 07).
- `InsertAt`/`InsertBefore`/`InsertAfter` index parameters are typed `T` instead of `int`.

Separately, Projects 7 and 8 both depend on MSVC's `__declspec(property)` extension and will not compile under GCC/Clang — confirmed for both by attempting a g++ build. Project 8 additionally requires `clsString.h` (used by `clsDate.h`) which was not part of its delivery — that file will need to be pulled back in from the Level 04 repo for Project 8 to compile as delivered.

## Delivery Structure
Each project was delivered as its own folder/zip:
```
Project - 01 - Doubly-Linked-List/                    (+ Updates 01-08)
Project - 02 - Queue-Using-Doubly-Linked-List/         (+ Update 01)
Project - 03 - Stack-Using-Queue-Inheritance/
Project - 04 - Dynamic-Array/                          (+ Updates 01-07)
Project - 05 - Queue-Using-Dynamic-Array/
Project - 06 - Stack-Using-Dynamic-Array/
Project - 07 - Undo-Redo-String/
Project - 08 - Ticket-Queue-System/
```
