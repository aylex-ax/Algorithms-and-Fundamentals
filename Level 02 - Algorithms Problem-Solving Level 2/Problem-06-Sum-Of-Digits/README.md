# Problem 06: Sum Of Digits

## 📋 Description
A C++ program that reads a positive number and calculates
the sum of all its digits.
Example: 1234 → 1 + 2 + 3 + 4 = 10

## 💡 Solution Overview
- `ReadPositiveNumber()` validates input — only accepts positive numbers
- `SumOfDigits()` extracts each digit using modulo and adds it to Sum
- Result printed directly in `main()`

## 🔑 Key Concepts
- Modulo operator `%` to extract last digit
- Integer division `/` to remove last digit
- Accumulator pattern (Sum variable)
- `while` loop

## 🔄 Logic Diagram
[Read N]
   ↓
[While N > 0]
   ↓
[Remainder = N % 10]
[Sum += Remainder]
[N = N / 10]
   ↓
[Return Sum]

## 📥 Sample Input / Output
Please enter positive number? → 1234
Sum of digits = 10