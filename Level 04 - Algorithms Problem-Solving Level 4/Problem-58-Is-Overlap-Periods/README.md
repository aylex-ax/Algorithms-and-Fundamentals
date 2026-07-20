# Problem 58: Is OverLap Periods

## 📋 Description
Given two date periods (each with a start and end date), checks whether they overlap at all.

## 💡 Solution Overview
- `stPeriod` struct groups a `StartDate` and `EndDate` together
- `IsOverLapPeriods()` returns false only if Period 2 ends before Period 1 starts, or starts after Period 1 ends — otherwise the periods must overlap

## 🔑 Key Concepts
- Nested structs (`stPeriod` containing two `stDate`s)
- Overlap detection by checking the two ways periods can *fail* to overlap, rather than enumerating every way they *can*

## 📥 Sample Output
```
Yes, Periods Overlap
```
