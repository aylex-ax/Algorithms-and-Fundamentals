# Problem 3: Is Leap Year (One Line of Code)

## 📋 Description
Same leap-year check as Problem 2, rewritten as a single boolean expression instead of if/else branches.

## 💡 Solution Overview
- `IsLeapYear()` returns `(Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0)` directly

## 🔑 Key Concepts
- Boolean expression simplification
- Logical OR / AND combined into one return statement

## 📥 Sample Output
```
Please Enter a Year to check ?
1900
No, Year [1900] is Not a Leap Year
```
