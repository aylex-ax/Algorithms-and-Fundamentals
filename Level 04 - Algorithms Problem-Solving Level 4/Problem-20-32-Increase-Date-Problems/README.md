# Problems 20-32: Increase Date Problems

## 📋 Description
A combined program covering a whole family of "increase date by X" operations: one day, X days, one week, X weeks, one month, X months, one year, X years, one decade, X decades, one century, and one millennium — each building on the previous one.

## 💡 Solution Overview
- `IncreaseDateByOneDay()` is the base case (handles day/month/year rollover)
- `IncreaseDateByXDays()` loops `IncreaseDateByOneDay()` N times
- `IncreaseDateByOneWeek()` / `IncreaseDateByXWeeks()` build on the day functions (a week = 7 days)
- `IncreaseDateByOneMonth()` / `IncreaseDateByXMonths()` handle month rollover directly and clamp the day if the new month is shorter (e.g. Jan 31 + 1 month → Feb 28/29, not Feb 31)
- `IncreaseDateByOneYear()` / `IncreaseDateByXYears()` — plus a "Faster" variant that adds years directly instead of looping one year at a time
- Decades, centuries, and millennia follow the same "slow loop vs. fast direct add" pattern

## 🔑 Key Concepts
- Layered function design: each larger unit of time is built from a smaller, already-tested one
- Two implementation strategies for the same result: looping one unit at a time (simple, slower) vs. calculating directly (faster, same outcome)
- Day clamping when increasing by month (handling different month lengths)

## 📥 Sample Output
```
Date After :

01 - Adding one day is : 21/7/2026
02 - Adding 10 days is : 31/7/2026
03 - Adding one week is : 7/8/2026
...
14 - Adding one millennium is : 7/8/4046
```
