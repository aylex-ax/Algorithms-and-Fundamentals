# Problem 09: Print All Digits Frequency

## 📋 Description
A C++ program that reads a positive number and prints
the frequency of every digit (0-9) that appears in it.
Example: 1221 → digit 1: 2 times, digit 2: 2 times

## 💡 Solution Overview
- `ReadPositiveNumber()` validates input — only accepts positive numbers
- `CountDigitFrequency()` reused from Problem 08 to count each digit
- `PrintAllDigitsFrequency()` loops through digits 0-9 and prints non-zero frequencies only

## 🔑 Key Concepts
- Function reusability across problems
- Loop from 0 to 9 (all possible digits)
- Frequency counter pattern
- Conditional output (only print if frequency > 0)

## 🔄 Logic Diagram
[Read Number]
   ↓
[For i = 0..9]
   ↓
[CountDigitFrequency(i, Number)]
   ↓
[Frequency > 0?] → YES → [Print digit & frequency]
               → NO  → [Skip]

## 📥 Sample Input / Output
Please enter the main number? → 1221

Digit 1 frequency is 2 time(s).
Digit 2 frequency is 2 time(s).