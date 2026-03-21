# Problem 10: Print Digits In Order

## 📋 Description
A C++ program that reads a positive number and prints
its digits in their correct order (left to right).
Example: 1234 → 1, 2, 3, 4

## 💡 Solution Overview
- `ReadPositiveNumber()` validates input — only accepts positive numbers
- `ReverseNumber()` reverses the number first (reused from Problem 07)
- `PrintDigits()` extracts and prints digits using modulo
- Combining both: reversing then extracting = correct order 🧠

## 🔑 Key Concepts
- Function composition (nesting functions inside each other)
- Reusing functions across problems
- Indirect ordering via reverse trick
- Modulo & division digit extraction

## 🔄 Logic Diagram
[Read N]
   ↓
[ReverseNumber(N)] → e.g. 1234 → 4321
   ↓
[PrintDigits(4321)]
   ↓
[Extract digits: 1, 2, 3, 4] ✅

## 📥 Sample Input / Output
Please enter the main number? → 1234
1
2
3
4