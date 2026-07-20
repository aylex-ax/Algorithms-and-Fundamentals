# Problem 2: Is Leap Year

## 📋 Description
Checks whether a given year is a leap year using explicit if/else branches.

## 💡 Solution Overview
- `IsLeapYear()` checks divisibility by 400, then 100, then 4, in that priority order

## 🔑 Key Concepts
- Leap year rule (divisible by 4, except centuries unless divisible by 400)
- Branching order matters — checking 400 before 100 avoids misclassifying years like 2000

## 📥 Sample Output
```
Please Enter a Year to check ?
2024
Yes, Year [2024] is a Leap Year
```
