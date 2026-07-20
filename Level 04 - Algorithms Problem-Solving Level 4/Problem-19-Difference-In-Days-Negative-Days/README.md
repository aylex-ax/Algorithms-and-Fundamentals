# Problem 19: Difference In Days (Negative Days)

## 📋 Description
Extends Problem 17 so the day-difference calculation also works when Date1 is after Date2, returning a negative result instead of always assuming Date1 comes first.

## 💡 Solution Overview
- `GetDifferenceInDays()` swaps the two dates internally (via `SwapDates()`) if Date1 isn't already before Date2, and tracks a `SwapFlagValue` (1 or -1) to apply the correct sign to the final result

## 🔑 Key Concepts
- Signed results using a sign-tracking flag
- Swapping struct values with a temporary variable

## 📥 Sample Output
```
Difference is : -15 Day(s).
Difference (Including End Day) is : -16 Day(s).
```
