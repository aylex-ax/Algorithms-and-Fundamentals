# Problem 14: Inverted Letter Pattern

## 📋 Description
A C++ program that prints an inverted letter pattern.
Each row prints a letter repeated based on its position, counting down.
Example for N=4:
DDDD
CCC
BB
A

## 💡 Solution Overview
- `ReadPositiveNumber()` validates input — only accepts positive numbers
- `PrintInvertedLetterPattern()` uses ASCII values to convert numbers to letters
- Outer loop starts at `N + 64` (e.g. 4+64=68='D') down to 65 ('A')
- Inner loop prints the letter `i-64` times

## 🔑 Key Concepts
- ASCII values (A=65, B=66, ...)
- `char()` casting to convert int to character
- Nested `for` loops
- Descending pattern with letters

## 🔄 Logic Diagram
[Read N]
   ↓
[For i = N+64 down to 65]
   ↓
   [For j = 1 to i-64]
      → [Print char(i)]
   ↓
[New Line]

## 📥 Sample Input / Output
Please enter positive number? → 4

DDDD
CCC
BB
A