# Problem 17: Difference In Days

## 📋 Description
Calculates how many days separate two dates by repeatedly advancing the earlier date one day at a time until it reaches the later one.

## 💡 Solution Overview
- `GetDifferenceInDays()` loops `IncreaseDateByOneDay()` while `Date1` is before `Date2`, counting each step
- An optional `IncludeEndDay` parameter adds one extra day to the count

## 🔑 Key Concepts
- Brute-force day-by-day counting (simple but not the fastest approach)
- Default parameter values (`IncludeEndDay = false`)

## 📥 Sample Output
```
Difference is : 15 Day(s).
Difference (Including End Day) is : 16 Day(s).
```
