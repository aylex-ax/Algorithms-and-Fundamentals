# Problem 61: Count Overlap Days

## 📋 Description
Given two periods that overlap, counts exactly how many days the overlap spans.

## 💡 Solution Overview
- `CountOverLapDays()` first checks `IsOverLapPeriods()` (Problem 58) as a short-circuit — no overlap means zero shared days
- It then walks day by day through whichever period is shorter, checking each day with `IsDateWithinPeriod()` (Problem 60) against the other period, counting matches

## 🔑 Key Concepts
- Combining nearly every date/period utility built across the level (comparison, overlap detection, period length, within-period checks) into one final function
- Optimizing by iterating the shorter period instead of the longer one

## 📥 Sample Output
```
OverLap Days Count is : 5
```
