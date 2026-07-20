# Problem 12: Add Days To Date

## 📋 Description
Adds a given number of days to a date and returns the resulting date, using the day-order approach from Problems 10 & 11.

## 💡 Solution Overview
- `AddDaysToDate()` converts the date to its day-of-year order, adds the requested days, then walks forward month by month (rolling into the next year if needed) to find the resulting date

## 🔑 Key Concepts
- Combining Problem 10 and Problem 11's logic into one operation
- Handling year rollover when the day count overflows December

## 📥 Sample Output
```
Date after adding [45] days is : 3/9/2026
```
