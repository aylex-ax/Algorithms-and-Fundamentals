# Problem 57: Compare Date Function

## 📋 Description
Combines the Before / Equal / After checks (Problems 13, 14, 56) into a single three-way comparison function, similar in spirit to `strcmp`.

## 💡 Solution Overview
- `enDateCompare` enum defines `Before = -1`, `Equal = 0`, `After = 1`
- `CompareDates()` checks Before first, then Equal, and falls through to After otherwise — returning one of the three enum values

## 🔑 Key Concepts
- Enums for representing a fixed set of named outcomes
- Consolidating three separate boolean functions into one three-way result

## 📥 Sample Output
```
Compare Result = -1
```
