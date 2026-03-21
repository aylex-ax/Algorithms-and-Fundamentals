# Problem 15: Letter Pattern

## 📋 Description
A C++ program that prints an ascending letter pattern.
Each row prints a letter repeated based on its position, counting up.
Example for N=4:
A
BB
CCC
DDDD

## 💡 Solution Overview
- `ReadPositiveNumber()` validates input — only accepts positive numbers
- `PrintLetterPattern()` uses ASCII values to convert numbers to letters
- Outer loop starts at 65 ('A') up to `N+64`
- Inner loop prints the letter `i-64` times
- Mirror logic of Problem 14 ✨

## 🔑 Key Concepts
- ASCII values (A=65, B=66, ...)
- `char()` casting to convert int to character
- Nested `for` loops
- Ascending pattern with letters

## 🔄 Logic Diagram
[Read N]
   ↓
[For i = 65 up to N+64]
   ↓
   [For j = 1 to i-64]
      → [Print char(i)]
   ↓
[New Line]

## 📥 Sample Input / Output
Please enter positive number? → 4

A
BB
CCC
DDDD