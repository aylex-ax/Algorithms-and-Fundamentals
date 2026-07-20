# Problem 7: Day Name

## 📋 Description
Given a full date, calculates which day of the week it falls on and prints its short name (Sun, Mon, ...).

## 💡 Solution Overview
- `DayOfWeekOrder()` implements Zeller's Congruence–style formula to compute a 0-6 day index
- `DayShortName()` maps that index to a 3-letter day name using a lookup array

## 🔑 Key Concepts
- A closed-form date-to-weekday formula (no loops needed)
- Array-based name lookup

## 📥 Sample Output
```
Data      : 20/7/2026
Day Order : 1
Day Name  : Mon
```
