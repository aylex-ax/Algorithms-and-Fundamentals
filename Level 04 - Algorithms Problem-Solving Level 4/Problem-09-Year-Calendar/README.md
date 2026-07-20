# Problem 9: Year Calendar

## 📋 Description
Prints a full calendar for an entire year by printing each month's calendar in sequence.

## 💡 Solution Overview
- `PrintYearCalendar()` prints a year header, then loops from month 1 to 12 calling `PrintMonthCalendar()` (from Problem 8) for each

## 🔑 Key Concepts
- Reusing a single-month solution to build a whole-year solution
- Looping over a fixed range (1 to 12)

## ⚠️ Note
Same "Sut" instead of "Sat" typo carried over from Problem 8's day-name array.

## 📥 Sample Output
```
  __________________________________

          Calendar - 2026
  __________________________________

  _______________Jan________________
  ...
  _______________Dec________________
  ...
```
