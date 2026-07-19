# Problem 29: Count Small & Capital Letters

## 📋 Description
Reads a string and counts its total length, its capital letters, and its small letters — solved two ways.

## 💡 Solution Overview
- Method 1: separate `CountCapitalLetters()` / `CountSmallLetters()` functions
- Method 2: a single `CountLetters()` function that takes an `enWhatToCount` enum to decide what to count

## 🔑 Key Concepts
- Enums (`enum enWhatToCount`)
- Comparing two designs (separate functions vs. one parameterized function) for the same task

## 📥 Sample Output
```
String Length = 11
Capital Leters Count = 2
Small Leters Count = 9
```
