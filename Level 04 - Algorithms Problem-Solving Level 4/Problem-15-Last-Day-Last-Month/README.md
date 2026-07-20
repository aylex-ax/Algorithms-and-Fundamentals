# Problem 15: Last Day, Last Month

## 📋 Description
Checks whether a given date is the last day of its month, and whether its month is the last month of the year (December).

## 💡 Solution Overview
- `IsLastDayInMonth()` compares the date's day against `NumberOfDaysInAMonth()`
- `IsLastMonthInYear()` simply checks `Month == 12`

## 🔑 Key Concepts
- Small, single-purpose boolean helper functions
- Building blocks that later problems (16 onward) rely on for date-increment logic

## 📥 Sample Output
```
No, Day is NOT Last Day in Month.
No, Month is NOT Last Month in Year.
```
