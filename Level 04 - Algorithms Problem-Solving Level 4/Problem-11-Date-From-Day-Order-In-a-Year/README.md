# Problem 11: Date from Day Order In a Year

## 📋 Description
The inverse of Problem 10: given a day-of-year number (e.g. day 201) and a year, calculates the actual calendar date.

## 💡 Solution Overview
- `GetDateFromDayOrderInYear()` walks month by month, subtracting each month's day count from the remaining total until the correct month and day are found

## 🔑 Key Concepts
- Inverse operations (order → date, complementing Problem 10's date → order)
- `while(true)` loop with a `break` once the answer is found

## 📥 Sample Output
```
Number of Days from the begining of the Year is 201
Date for [201] is : 20/7/2026
```
