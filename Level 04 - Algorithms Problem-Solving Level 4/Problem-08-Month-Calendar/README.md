# Problem 8: Month Calendar

## 📋 Description
Prints a full text-based calendar for a given month and year, with days aligned under the correct weekday column.

## 💡 Solution Overview
- `DayOfWeekOrder()` finds which weekday the 1st of the month falls on
- `PrintMonthCalendar()` prints leading blank slots to align day 1, then prints each day number, wrapping to a new line every 7 entries

## 🔑 Key Concepts
- Combining several date utilities (day-of-week, days-in-month, leap year) into one visual output
- Manual column alignment using a counter that resets every 7 iterations

## ⚠️ Note
The day-name array has "Sut" instead of "Sat" for Saturday — a typo in the lookup table (only affects `DayShortName`, not the calendar grid itself, which is not affected since `PrintMonthCalendar` doesn't call `DayShortName`).

## 📥 Sample Output
```
  _______________Jul________________

  Sun  Mon  Tue  Wed  Thu  Fri  Sat
          1    2    3    4
    5    6    7    8    9   10   11
   ...
```
