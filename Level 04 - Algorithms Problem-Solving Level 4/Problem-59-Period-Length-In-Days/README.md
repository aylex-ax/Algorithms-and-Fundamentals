# Problem 59: Period Length In Days

## 📋 Description
Calculates how many days a given period (start date to end date) spans.

## 💡 Solution Overview
- `PeriodLengthInDays()` is a thin wrapper that hands the period's start and end dates to `GetDifferenceInDays()` (from Problem 19's negative-aware version)

## 🔑 Key Concepts
- Wrapping an existing general-purpose function (`GetDifferenceInDays`) with a period-specific name for clarity

## 📥 Sample Output
```
Period Length is : 11
Period Length (Including End Day) is : 12
```
