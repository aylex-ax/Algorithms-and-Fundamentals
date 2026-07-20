# Problems 47-53: More Date Problems

## 📋 Description
A combined program that uses today's system date to answer a set of practical questions: is it the end of the week, is it a weekend, is it a business day, and how many days remain until the end of the week / month / year.

## 💡 Solution Overview
- `GetSystemDate()` pulls today's date from the system clock
- `IsEndOfWeek()` / `IsWeekEnd()` / `IsBusinessDay()` classify the day using `DayOfWeekOrder()`
- `DaysUntilTheEndOfWeek()` / `DaysUntilTheEndOfMonth()` / `DaysUntilTheEndOfYear()` each build a target date (end of week/month/year) and reuse `GetDifferenceInDays()` to count the days to it

## 🔑 Key Concepts
- Combining several previously built date utilities into higher-level, real-world questions
- Constructing a "target date" struct on the fly to reuse an existing difference function

## 📥 Sample Output
```
Today is Mon , 20/7/2026

Is it End of Week?
No it is Not End of Week.

Is it Weekend?
No today is Mon, Not a week end.

Is it Business Day?
Yes it is a Business Day.

Days until end of week : 5 Day(s).
Days until end of month : 11 Day(s).
Days until end of year : 164 Day(s).
```
