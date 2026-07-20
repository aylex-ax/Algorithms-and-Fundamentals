# Level 03 =----> (07)-Algorithms Problem-Solving Level 3

Part of a structured C++ learning roadmap ([ProgrammingAdvices.com](https://programmingadvices.com)) focused on strengthening algorithmic thinking through progressively harder problem sets. This level covers 2D arrays/matrices, string manipulation, recursion, and an introduction to file-based data persistence (a mini client-management system).

## 📂 Structure

Each problem lives in its own folder containing:
- A `.cpp` source file with the full solution
- A `README.md` explaining the problem, approach, and key concepts used

```
Level 03 - Algorithms Problem-Solving Level 3/
├── Problem-01-3x3-Random-Matrix/
├── Problem-02-Sum-Each-Row-in-Matrix/
├── ...
└── Problem-51-Update-Client-By-Account-Number/
```

## 📑 Problem Index

| # | Problem | Topic |
|---|---------|-------|
| 01 | 3x3 Random Matrix | Matrices |
| 02 | Sum Each Row in Matrix | Matrices |
| 03 | Sum Each Row in Matrix in Array | Matrices |
| 04 | Sum Each Col in Matrix | Matrices |
| 05 | Sum Each Col in Matrix in Another Array | Matrices |
| 06 | 3x3 Ordered Matrix | Matrices |
| 07 | Transpose Matrix | Matrices |
| 08 | Multiply 2 Matrices | Matrices |
| 09 | Print Middle Row and Col of Matrix | Matrices |
| 10 | Sum of Matrix | Matrices |
| 11 | Check Matrices Equality | Matrices |
| 12 | Check Typical Matrices | Matrices |
| 13 | Check Identity Matrix | Matrices |
| 14 | Check Scalar Matrix | Matrices |
| 15 | Check Number in Matrix | Matrices |
| 16 | Check Sparse Matrix | Matrices |
| 17 | Number Exists In Matrix | Matrices |
| 18 | Intersected Numbers in Matrices | Matrices |
| 19 | Min and Max Number in Matrix | Matrices |
| 20 | Palindrome Matrix | Matrices |
| 21 | Fibonacci Series | Recursion & Loops |
| 22 | Fibonacci Series With Recursion | Recursion & Loops |
| 23 | Print First Letter of Each Word | Strings |
| 24 | Upper First Letter of Each Word | Strings |
| 25 | Lower First Letter of Each Word | Strings |
| 26 | Upper & Lower All Letters of a String | Strings |
| 27 | Invert Character Case | Strings |
| 28 | Invert All Letters Case | Strings |
| 29 | Count Small & Capital Letters | Strings |
| 30 | Count Letters | Strings |
| 31 | Count Letters (Match Case) | Strings |
| 32 | Is Vowel | Strings |
| 33 | Count Vowel | Strings |
| 34 | Print All Vowels In String | Strings |
| 35 | Print Each Word In String | Strings |
| 36 | Count Each Word In String | Strings |
| 37 | Split String | Strings |
| 38 | TrimLeft, TrimRight, Trim | Strings |
| 39 | Join String | Strings |
| 40 | Join String (Overloading) | Strings |
| 41 | Reverse Words | Strings |
| 42 | Replace Words | Strings |
| 43 | Replace Words (Custom) | Strings |
| 44 | Remove Punctuations | Strings |
| 45 | Convert Record to Line | Structs & File I/O |
| 46 | Convert Line Data to Record | Structs & File I/O |
| 47 | Add Clients to File | File I/O |
| 48 | Show All Clients | File I/O |
| 49 | Find Client By Account Number | File I/O |
| 50 | Delete Client By Account Number | File I/O |
| 51 | Update Client By Account Number | File I/O |

## 🔑 Key Concepts Covered

- 2D array traversal, rows vs. columns, transposition
- Matrix property checks (identity, scalar, sparse, palindrome, equality)
- Iterative vs. recursive problem solving (Fibonacci)
- String parsing without regex: `find`, `substr`, `erase`
- Building reusable utilities: `Split`, `Join`, `Trim`, case conversion
- Structs for modeling real-world records (`sClient`)
- Flat-file persistence: converting structs to/from delimited text lines
- Basic CRUD operations on file-backed data (Add, Show, Find, Delete, Update)

## 🛠️ Requirements

- Any standard C++ compiler (g++, MSVC, Clang) supporting C++11 or later
- No external libraries required

## ▶️ How to Run

```bash
g++ ProblemFile.cpp -o Problem
./Problem
```

## 📌 Notes

This level builds directly on Level 01 and Level 02, moving from single-array problems into 2D data structures, deeper string handling, and the first taste of persistent data storage — a foundation for the database-driven projects later in the roadmap.
