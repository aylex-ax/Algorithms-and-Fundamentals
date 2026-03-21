# Problem 13: Number Pattern

## 📋 Description
A C++ program that prints an ascending number pattern.
Each row i prints the digit i exactly i times, counting up.
Example for N=4:
1
22
333
4444

## 💡 Solution Overview
- `ReadPositiveNumber()` validates input — only accepts positive numbers
- `PrintNumberPattern()` uses nested loops
- Outer loop counts UP from 1 to N
- Inner loop prints digit i exactly i times

## 🔑 Key Concepts
- Nested `for` loops
- Ascending loop pattern
- Number pattern printing
- Mirror logic of Problem 12

## 🔄 Logic Diagram
[Read N]
   ↓
[For i = 1 up to N]
   ↓
   [For j = 1 up to i]
      → [Print i]
   ↓
[New Line]

## 📥 Sample Input / Output
Please enter positive number? → 4

1
22
333
4444