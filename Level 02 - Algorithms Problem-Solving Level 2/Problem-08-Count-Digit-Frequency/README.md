# Problem 08: Count Digit Frequency

## 📋 Description
A C++ program that reads a positive number and a digit,
then counts how many times that digit appears in the number.
Example: 1221, digit 2 → appears 2 time(s)

## 💡 Solution Overview
- `ReadPositiveNumber()` validates input — only accepts positive numbers
- `CountDigitFrequency()` extracts each digit and compares to target
- `FreqCount` increments every time the digit matches

## 🔑 Key Concepts
- Modulo `%` to extract last digit
- Integer division `/` to remove last digit
- Frequency counter pattern
- `short` data type for single digit

## 🔄 Logic Diagram
[Read Number & DigitToCheck]
   ↓
[While Number > 0]
   ↓
[Remainder = Number % 10]
[Remainder == DigitToCheck?] → YES → [FreqCount++]
[Number = Number / 10]
   ↓
[Return FreqCount]

## 📥 Sample Input / Output
Please enter the main number? → 1221
Please enter one digit to check? → 2
Digit 2 frequency is 2 time(s).