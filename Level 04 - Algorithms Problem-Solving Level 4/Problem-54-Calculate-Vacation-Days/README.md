# Problem 54: Calculate Vacation Days

## 📋 Description
Given a start and end date for a vacation, calculates how many actual business days fall within that range (excluding weekends).

## 💡 Solution Overview
- `CalculateVacationDays()` walks day by day from start to end, incrementing a counter only on business days (via `IsBusinessDay()`)

## 🔑 Key Concepts
- Filtering while iterating day-by-day
- Reusing weekend/business-day detection from Problems 47-53

## 📥 Sample Output
```
Vacation From : Mon , 20/7/2026
Vacation To : Fri , 31/7/2026

Actual Vacation Days is : 8
```
