# Problem 55: Calculate Vacation Return Date

## 📋 Description
Given a start date and a number of vacation (business) days, calculates the date the person should return — skipping weekends both at the start and while counting.

## 💡 Solution Overview
- `CalculateVacationReturnDate()` first skips forward past any weekend at the start date, then loops forward counting only business days until the requested number is reached, skipping weekends encountered along the way

## 🔑 Key Concepts
- Two-phase loop: align to a valid start, then count only qualifying days
- The inverse problem of Problem 54 (days → return date, instead of range → day count)

## 📥 Sample Output
```
Return Date : Thu , 30/7/2026
```
