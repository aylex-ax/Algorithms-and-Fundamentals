# Problem 6: Number of Days In a Month (Short Logic)

## 📋 Description
Reimplements Problem 5's day count using a cleaner, shorter approach: a fixed 12-element lookup array instead of a loop.

## 💡 Solution Overview
- `NumberOfDaysInAMonth()` uses a `NumberOfDays[12]` array indexed directly by `Month - 1`, with a special case only for February

## 🔑 Key Concepts
- Direct array indexing instead of looping/searching
- Simplifying earlier logic (Problem 5) once the pattern is understood

## ⚠️ Note
The source file has a stray `S` character right after the final closing brace (`}S`), which is a typo — as written this file won't compile. It should just be a closing `}`.

## 📥 Sample Output
```
Number of Days    in Month [4] is 30
```
