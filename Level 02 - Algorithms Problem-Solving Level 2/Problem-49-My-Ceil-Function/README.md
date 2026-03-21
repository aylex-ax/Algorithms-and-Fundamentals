# Problem 49: My Ceil Function

## 📋 Description
A C++ program that implements a custom ceiling function
and compares its result with the built-in C++ `ceil()` function.
Example: 3.2 → MyCeil = 4 ✅
Example: -3.7 → MyCeil = -3 ✅
Example: 3.0 → MyCeil = 3 ✅

## 💡 Solution Overview
- `GetFractionPart()` reused from Problem 47 to extract decimal part
- `MyCeil()` handles 3 cases:
  - Has fraction + positive → round up `int(++Number)`
  - Has fraction + negative → truncate `int(Number)`
  - No fraction → return as-is `int(Number)`
- Result compared side by side with built-in `ceil()`

## ⚠️ Note
`++Number` modifies the parameter itself.
Cleaner alternative: `int(Number) + 1` for positive numbers.

## 🔑 Key Concepts
- Ceiling logic for positive vs negative numbers
- Fraction detection using `GetFractionPart()`
- 3-case handling (positive/negative/whole)
- Custom vs built-in function comparison

## 🔄 Logic Diagram
[Read Number]
   ↓
[Has Fraction?]
→ YES → [Number > 0?] → YES → [int(++Number)]
                      → NO  → [int(Number)]
→ NO  → [int(Number)]
   ↓
[Print MyCeil & C++ ceil side by side]

## 📥 Sample Input / Output
Please enter a number? → 3.2
My MyCeil Result : 4
C++ ceil Result : 4

Please enter a number? → -3.7
My MyCeil Result : -3
C++ ceil Result : -3