# Problem 38: TrimLeft, TrimRight, Trim

## 📋 Description
Removes leading and/or trailing spaces from a string.

## 💡 Solution Overview
- `TrimLeft()` finds the first non-space character and returns the substring from there
- `TrimRight()` finds the last non-space character and returns the substring up to there
- `Trim()` combines both by calling `TrimLeft(TrimRight(S1))`

## 🔑 Key Concepts
- Forward and backward scanning
- Function composition

## 📥 Sample Output
```
String     =        Ahmed Yaser       
Trim Left  = Ahmed Yaser       
Trim Right =        Ahmed Yaser
Trim       = Ahmed Yaser
```
