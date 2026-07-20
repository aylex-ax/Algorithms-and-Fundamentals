# Problem 1: Number to Text

## 📋 Description
A C++ program that converts a number (up to billions) into its full English text representation, using recursion.

## 💡 Solution Overview
- `NumberToText()` breaks the number into ranges (1-19, 20-99, 100-199, 200-999, thousands, millions, billions) and recursively converts each part, combining the results

## 🔑 Key Concepts
- Recursion for breaking a large problem into smaller sub-ranges
- Lookup arrays for word names
- `long long` for handling large numbers

## ⚠️ Note
- "Fourty" should be spelled "Forty".
- The output mixes plural and singular scale words inconsistently — e.g. "Three Hundreds" and "Two Millions" (plural) vs. "One Thousand" and "One Billion" (singular). Grammatically correct English always uses the singular form ("Hundred", "Thousand", "Million", "Billion") regardless of the number in front of it.
- Missing `#include<string>` — works on most compilers because `<iostream>` often pulls it in transitively, but it isn't guaranteed by the standard.

## 📥 Sample Output
```
Enter a number ?
2451
Two Thousand Four Hundreds Fifty One
```
