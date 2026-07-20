# Problem 60: Is Date Within Period

## 📋 Description
Checks whether a given date falls within a given period (inclusive of the start and end dates).

## 💡 Solution Overview
- `IsDateWithinPeriod()` uses `CompareDates()` (Problem 57) to confirm the date isn't before the period's start and isn't after its end

## 🔑 Key Concepts
- Reusing the three-way `CompareDates()` result instead of separate Before/After checks
- Inclusive range checking

## 📥 Sample Output
```
Yes, Date is within Period
```
