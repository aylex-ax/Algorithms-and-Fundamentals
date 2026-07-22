# Project 7 — Undo/Redo String

## Description
A string wrapper (`clsMyString`) that supports full undo/redo history using two `std::stack<string>` instances. Every time the string's value is set, the previous value is pushed onto an undo stack. `Undo()` moves the current value onto the redo stack and restores the previous one; `Redo()` does the reverse. Reading/writing the value is exposed through a Visual-Studio property (`S1.Value = "..."` / `cout << S1.Value`) that maps to `Get()`/`Set()` internally.

## Features
- Transparent property-style access to the string value (`S1.Value = "text"`, `S1.Value` to read)
- Full undo history — any number of prior values, not just one
- Full redo history — redo is available for every undo not yet overwritten by a new `Set`
- Generic two-stack undo/redo pattern, reusable for other value types

## Project Structure

| File | Responsibility |
|---|---|
| `clsMyString.h` | `clsMyString` class — holds the current value plus undo/redo stacks; exposes `Set`, `Get`, `Value` (property), `Undo`, `Redo`. |
| `main.cpp` | Driver program: sets the value three times, undoes three times, then redoes three times, printing the value after each step. |

### `clsMyString` — key members
| Member | Responsibility |
|---|---|
| `Set(string value)` | Pushes the current value onto `_Undo`, then replaces it with the new value. |
| `Get()` | Returns the current value. |
| `Value` | MSVC `__declspec(property)` — routes assignment through `Set` and reads through `Get`, so the object can be used as `S1.Value = "x"`. |
| `Undo()` | If `_Undo` isn't empty: pushes the current value onto `_Redo`, pops the top of `_Undo` into the current value. |
| `Redo()` | If `_Redo` isn't empty: pushes the current value onto `_Undo`, pops the top of `_Redo` into the current value. |

## Program Flow
1. `S1` starts with an empty string.
2. `Value` is set three times in a row: `"Mohammed"` → `"Mohammed2"` → `"Mohammed3"`, printing after each set.
3. `Undo()` is called three times, printing after each call — value steps back through `"Mohammed2"` → `"Mohammed"` → `""`.
4. `Redo()` is called three times, printing after each call — value steps forward through `"Mohammed"` → `"Mohammed2"` → `"Mohammed3"`.

## Sample Input/Output
```
S1  =
S1  = Mohammed
S1  = Mohammed2
S1  = Mohammed3

Undo:
__________

S1  after undo = Mohammed2
S1  after undo = Mohammed
S1  after undo =

Redo:
__________

S1  after Redo = Mohammed
S1  after Redo = Mohammed2
S1  after Redo = Mohammed3
```
(Undo/redo logic verified by compiling and running an equivalent of the class with plain `Get()`/`Set()` calls in place of the MSVC-only property syntax — see Known Issues. Output matches the trace above exactly.)

## Concepts Practiced
- Two-stack undo/redo design pattern
- `std::stack` usage (`push`, `pop`, `top`, `empty`)
- Encapsulation via private state + public accessor methods
- Property-style syntax (get/put) as a Visual Studio–specific language extension

## How to Run
1. Ensure `clsMyString.h` and `main.cpp` are in the same folder.
2. **This code requires Microsoft Visual Studio / MSVC** — see Known Issues below regarding `__declspec(property)`.
3. In Visual Studio: create a new empty C++ console project, add both files, build and run (Ctrl+F5).

## What I Learned
- How to implement multi-level undo/redo with two stacks instead of a single history list with a cursor.
- How MSVC's non-standard `__declspec(property)` extension can make a getter/setter pair behave like a plain data member syntactically.

## Known Issues
- **Compiler portability:** `__declspec(property(get = Get, put = Set))` is a Microsoft Visual C++–specific extension, not part of the ISO C++ standard. This code compiles in Visual Studio but **fails to compile under GCC/Clang** (confirmed by attempting to build with g++ — it rejects `__declspec(property(...))` outright). If cross-platform builds are ever needed, `Value` would need to become plain `Get()`/`Set()` calls, or use a portable operator-overload–based proxy object instead.
- No functional bugs found in the undo/redo logic itself — verified correct by tracing and by compiling/running an equivalent version of the class with `Get()`/`Set()` called directly (bypassing only the MSVC property syntax, not the logic).
- `Undo()`/`Redo()` are correctly guarded with `empty()` checks, unlike some earlier projects' array operations — no crash risk here.

## Future Improvements
- Replace `__declspec(property)` with a portable alternative (plain methods, or an operator-overload proxy class) if the project ever needs to build outside Visual Studio.
- Consider capping the undo/redo stack depth if very long edit histories become a memory concern.

## Built With
- C++ (MSVC-specific `__declspec(property)` extension)
- `<stack>` (STL)
