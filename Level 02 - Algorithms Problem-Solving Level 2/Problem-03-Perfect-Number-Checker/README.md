# Problem 03: Perfect Number Checker

## 📋 Description
A C++ program that checks whether a given positive number
is a **Perfect Number** or not.
A perfect number equals the sum of its proper divisors.
Example: 6 = 1 + 2 + 3 ✅

## 💡 Solution Overview
- `ReadPositiveNumber()` validates input — only accepts positive numbers
- `IsPerfectNumber()` sums all divisors up to N/2 and compares to N
- `PrintResult()` displays the final verdict

## 🔑 Key Concepts
- Divisor sum algorithm (up to N/2)
- `bool` return type
- Function decomposition
- Input validation with `do-while`

## 🔄 Logic Diagram
[Read N]
   ↓
[Sum all i where N % i == 0, i from 1..N/2]
   ↓
[Sum == N?] → YES → [Perfect Number ✅]
            → NO  → [Not Perfect Number ❌]

## 📥 Sample Input / Output
Please enter a positive number? → 6
6 is perfect number ✅

Please enter a positive number? → 10
10 is not perfect number ❌