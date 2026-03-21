# Problem 05: Print Digits In Reversed Order

## 📋 Description
A C++ program that reads a positive number and prints
its digits one by one in reversed order.
Example: 1234 → 4, 3, 2, 1

## 💡 Solution Overview
- `ReadPositiveNumber()` validates input — only accepts positive numbers
- `PrintDigitsInReversedOrder()` extracts digits using modulo and division
- Loop continues until Number reaches 0

## 🔑 Key Concepts
- Modulo operator `%` to extract last digit
- Integer division `/` to remove last digit
- `while` loop
- Digit extraction algorithm

## 🔄 Logic Diagram
[Read N]
   ↓
[While N > 0]
   ↓
[Remainder = N % 10] → [Print Remainder]
[N = N / 10]
   ↓
[Repeat until N = 0]

## 📥 Sample Input / Output
Please enter positive number? → 1234
4
3
2
1