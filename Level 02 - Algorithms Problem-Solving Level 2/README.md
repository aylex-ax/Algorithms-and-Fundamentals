# Level 02 - Algorithms Problem-Solving Level 2

Part of a structured C++ learning roadmap ([ProgrammingAdvices.com](https://programmingadvices.com)) that builds on Level 01's fundamentals by introducing number-digit manipulation, pattern printing, basic randomization/encryption, and — most heavily — one-dimensional arrays.

## 📂 Structure

Each problem lives in its own folder containing:
- A `.cpp` source file with the full solution
- A `README.md` explaining the problem, approach, and key concepts used
Level 02 - Algorithms Problem-Solving Level 2/
├── Problem-01-Multiplication-Table/
├── Problem-02-Print-Prime-Numbers-From-1-To-N/
├── ...
└── Problem-50-My-Sqrt-Function/

## 📑 Problem Index

| # | Problem | Topic |
|---|---------|-------|
| 01 | Multiplication Table | Loops & Formatting |
| 02 | Print Prime Numbers From 1 To N | Loops |
| 03 | Perfect Number Checker | Loops & Math |
| 04 | Print Perfect Numbers From 1 To N | Loops & Math |
| 05 | Print Digits In Reversed Order | Digit Manipulation |
| 06 | Sum Of Digits | Digit Manipulation |
| 07 | Reverse Number | Digit Manipulation |
| 08 | Count Digit Frequency | Digit Manipulation |
| 09 | Print All Digits Frequency | Digit Manipulation |
| 10 | Print Digits In Order | Digit Manipulation |
| 11 | Palindrome Number Checker | Digit Manipulation |
| 12 | Inverted Number Pattern | Pattern Printing |
| 13 | Number Pattern | Pattern Printing |
| 14 | Inverted Letter Pattern | Pattern Printing |
| 15 | Letter Pattern | Pattern Printing |
| 16 | Print Words From AAA To ZZZ | Pattern Generation |
| 17 | Brute Force Password Guesser | Simulation |
| 18 | Caesar Cipher (Encrypt/Decrypt) | Encryption |
| 19 | Random Number Generator | Randomization |
| 20 | Random Character Generator | Randomization |
| 21 | Random Key Generator | Randomization |
| 22 | Count Number Frequency In Array | Arrays |
| 23 | Fill Array With Random Numbers | Arrays |
| 24 | Find Max Number In Array | Arrays |
| 25 | Find Minimum Number In Array | Arrays |
| 26 | Sum Of Numbers In Array | Arrays |
| 27 | Average Of Numbers In Array | Arrays |
| 28 | Copy Array | Arrays |
| 29 | Copy Only Prime Numbers To Array | Arrays |
| 30 | Sum Of Two Arrays | Arrays |
| 31 | Shuffle Array | Arrays |
| 32 | Copy Array In Reverse Order | Arrays |
| 33 | Fill Array With Random Keys | Arrays |
| 34 | Find Number Position In Array | Arrays |
| 35 | Is Number In Array | Arrays |
| 36 | Add Elements To Array By User | Arrays |
| 37 | Copy Array Using AddArrayElement | Arrays |
| 38 | Copy Odd Numbers To Array | Arrays |
| 39 | Copy Prime Numbers To Array | Arrays |
| 40 | Copy Distinct Numbers To Array | Arrays |
| 41 | Palindrome Array Checker | Arrays |
| 42 | Count Odd Numbers In Array | Arrays |
| 43 | Count Even Numbers In Array | Arrays |
| 44 | Count Positive Numbers In Array | Arrays |
| 45 | Count Negative Numbers In Array | Arrays |
| 46 | My ABS Function | Custom Math Functions |
| 47 | My Round Function | Custom Math Functions |
| 48 | My Floor Function | Custom Math Functions |
| 49 | My Ceil Function | Custom Math Functions |
| 50 | My Sqrt Function | Custom Math Functions |

## 🔑 Key Concepts Covered

- Digit-by-digit number processing (`%` and `/` to extract digits)
- Pattern printing with nested loops (numbers, letters, inverted shapes)
- Basic randomization (`rand()`, `srand()`) and simple encryption (Caesar cipher)
- One-dimensional array fundamentals: filling, searching, copying, filtering, and aggregating
- Reimplementing standard library math functions (`abs`, `round`, `floor`, `ceil`, `sqrt`) from scratch to understand how they work internally

## 🛠️ Requirements

- Any standard C++ compiler (g++, MSVC, Clang) supporting C++11 or later
- No external libraries required

## ▶️ How to Run

```bash
g++ ProblemFile.cpp -o Problem
./Problem
```

## 📌 Notes

This level shifts focus from single-value logic (Level 01) to working with collections of data via arrays, while also introducing digit-level math and basic security/randomization concepts — direct groundwork for the 2D matrices and string-processing work in Level 03.