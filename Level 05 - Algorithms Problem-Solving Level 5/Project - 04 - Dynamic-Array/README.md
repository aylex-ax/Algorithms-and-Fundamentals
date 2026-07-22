# Project 4: Dynamic Array

## Description
This project implements a fixed-capacity generic array (`clsDynamicArray`) wrapped in a class, allocated dynamically on the heap at construction time. It provides safe item assignment, size tracking, an empty check, and a print routine — laying the groundwork for further extensions later in this project (irregular extension groups per the roadmap).

## Features
- Heap-allocated array sized at construction (`OriginalArray = new T[_Size]`).
- `SetItem(int index, T Value)` — assigns a value at a given index, with a bounds check that returns `false` on failure instead of crashing.
- `Size()` — returns the array's capacity.
- `IsEmpty()` — returns true if the array was constructed with size 0.
- `PrintList()` — prints all items in the array.
- Proper cleanup via destructor (`delete[] OriginalArray`).

## Project Structure

| Function | Responsibility |
|---|---|
| `clsDynamicArray(int Size)` (constructor) | Allocate the array on the heap with the given size (clamped to 0 if negative) |
| `~clsDynamicArray()` (destructor) | Free the heap-allocated array |
| `SetItem` | Assign a value at a given index, with an upper-bound safety check |
| `Size` | Return the array's capacity |
| `IsEmpty` | Return true if the array has zero capacity |
| `PrintList` | Print every item in the array |

## Program Flow
1. A `clsDynamicArray<int>` of size 5 is constructed.
2. Five values (10, 20, 30, 40, 50) are set at indices 0–4 via `SetItem`.
3. `IsEmpty()` and `Size()` are printed.
4. `PrintList()` displays all array items.

## Sample Input/Output
```
Is Empty?  0
Array Size: 5

Array Items:
10 20 30 40 50
```

## Concepts Practiced
- Dynamic memory allocation with `new`/`delete[]` for a generic (template) container.
- Encapsulating a raw array behind a safer, bounds-checked interface.
- Constructor default arguments (`int Size = 0`) and defensive clamping of invalid input.
- RAII basics: pairing allocation in the constructor with cleanup in the destructor.

## How to Run
1. Compile `main.cpp` (which includes `clsDynamicArray.h`) with a C++11 (or later) compiler.
2. Run the resulting executable.

## What I Learned
- How to wrap a raw dynamically-allocated array in a class that manages its own memory safely.
- How a simple bounds check in `SetItem` prevents undefined behavior from out-of-range writes.

## Known Issues
- `SetItem` only checks the upper bound (`index >= _Size`) but does not check for a negative index — passing a negative index will attempt to write out of bounds instead of returning `false`.
- The `_Size < 0` check inside `SetItem` can never be true in practice, since the constructor already clamps `_Size` to 0 or greater before it is ever assigned — this condition is effectively dead code.

## Future Improvements
- Add a lower-bound check (`index < 0`) to `SetItem` to fully guard against invalid indices.
- Consider adding a `GetItem` accessor with the same bounds-checking pattern as `SetItem`, for symmetry.

## Built With
- C++ (C++11 or later)
