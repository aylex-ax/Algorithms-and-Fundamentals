# Problem 16: Increase Date By One Day

## 📋 Description
Adds exactly one day to a given date, correctly handling month-end and year-end rollovers.

## 💡 Solution Overview
- `IncreaseDateByOneDay()` uses `IsLastDayInMonth()` and `IsLastMonthInYear()` (from Problem 15) to decide whether to just increment the day, roll to the next month, or roll into a new year

## 🔑 Key Concepts
- Rollover logic (day → month → year)
- The core function that Problems 17 onward build all further date arithmetic on top of

## 📥 Sample Output
```
Date after adding one day is : 1/8/2026
```
