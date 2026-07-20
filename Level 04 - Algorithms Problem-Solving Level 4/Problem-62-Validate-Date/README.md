# Problem 62: Validate Date

## 📋 Description
Checks whether a day/month/year combination represents a real, valid calendar date (e.g. rejects Feb 30, or day 0, or month 13).

## 💡 Solution Overview
- `IsValidDate()` checks the day and month are within general bounds, handles February's leap-year-dependent limit specifically, then confirms the day doesn't exceed the actual number of days in that month

## 🔑 Key Concepts
- Defensive validation with multiple early-exit checks
- Reusing `NumberOfDaysInAMonth()` and `IsLeapYear()` as the source of truth for what's valid

## 📥 Sample Output
```
Please Enter a Day ? 30
Please Enter a Month ? 2
Please Enter a Year ? 2026

No, Date is NOT Valid Date.
```
