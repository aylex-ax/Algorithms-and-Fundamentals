# Problem 4: Number of Days-Hours-Minutes-Seconds In a Year

## 📋 Description
Given a year, calculates the total number of days, hours, minutes, and seconds in it (accounting for leap years).

## 💡 Solution Overview
- `NumberOfDaysInAYear()` returns 365 or 366 based on `IsLeapYear()`
- `NumberOfHoursInAYear()`, `NumberOfMinutesInAYear()`, `NumberOfSecondsInAYear()` each build on the previous function's result

## 🔑 Key Concepts
- Function composition — each unit builds on the smaller one
- Leap year awareness in a real calculation

## 📥 Sample Output
```
Number of Days    in Year [2024] is 366
Number of Hours   in Year [2024] is 8784
Number of Minutes in Year [2024] is 527040
Number of Seconds in Year [2024] is 31622400
```
