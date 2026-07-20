# Problem 5: Number of Days-Hours-Minutes-Seconds In a Month

## 📋 Description
Given a year and month, calculates the total number of days, hours, minutes, and seconds in that month.

## 💡 Solution Overview
- `NumberOfDaysInAMonth()` handles February specially (leap year check) and uses a lookup array of 31-day months for the rest
- The Hours/Minutes/Seconds functions build on `NumberOfDaysInAMonth()`, same pattern as Problem 4

## 🔑 Key Concepts
- Lookup array (`arr31Days`) combined with a loop instead of a long if/else chain
- Reused function-composition pattern from Problem 4

## 📥 Sample Output
```
Number of Days    in Month [2] is 29
Number of Hours   in Month [2] is 696
Number of Minutes in Month [2] is 41760
Number of Seconds in Month [2] is 2505600
```
