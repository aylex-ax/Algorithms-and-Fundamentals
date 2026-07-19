# Problem 31: Count Letters (Match Case)

## 📋 Description
Counts occurrences of a character in a string, with an option to ignore letter case.

## 💡 Solution Overview
- `CountLetter()` takes a `MatchCase` flag (default `true`); when `false`, it compares `tolower()` of both characters instead of the raw characters

## 🔑 Key Concepts
- Default parameter values
- Case-insensitive comparison

## 📥 Sample Output
```
Letter 'a' Count = 1
Letter 'a' or 'A' Count = 3
```
