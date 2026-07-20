# Problems 33-46: Decrease Date Problems

## 📋 Description
The mirror image of Problems 20-32: a combined program covering "decrease date by X" operations — one day, X days, one week, X weeks, one month, X months, one year, X years, one decade, X decades, one century, and one millennium.

## 💡 Solution Overview
- `DecreaseDateByOneDay()` is the base case, using `IsFirstDayInMonth()` / `IsFirstMonthInYear()` to detect when it needs to roll backward into the previous month or year
- Every other function (`DecreaseDateByXDays`, `DecreaseDateByOneWeek`, `DecreaseDateByOneMonth`, etc.) follows the exact same layered pattern as the Increase Date Problems (20-32), just subtracting instead of adding

## 🔑 Key Concepts
- Symmetric design to Problems 20-32 — same architecture, opposite direction
- Backward rollover logic (day 1 → last day of previous month; month 1 → December of previous year)

## 📥 Sample Output
```
Date After :

01 - Subtracting one day is : 19/7/2026
02 - Subtracting 10 days is : 9/7/2026
...
14 - Subtracting one millennium is : 9/7/-1974
```
