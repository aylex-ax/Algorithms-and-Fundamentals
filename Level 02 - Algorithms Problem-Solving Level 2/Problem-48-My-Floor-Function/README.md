# Problem 48: My Floor Function

## 📋 Description
A C++ program that implements a custom floor function
and compares its result with the built-in C++ `floor()` function.
Example: 3.7 → MyFloor = 3 ✅
Example: -3.7 → MyFloor = -4 ✅

## 💡 Solution Overview
- `MyFloor()` uses `int()` casting to truncate decimal part
- For positive: `int(Number)` gives the floor directly
- For negative: `int(--Number)` decrements then truncates
- Result compared side by side with built-in `floor()`

## ⚠️ Note
`--Number` modifies the parameter itself.
Cleaner alternative: `int(Number) - 1` for negative numbers.

## 🔑 Key Concepts
- `int()` casting for truncation
- Floor logic for positive vs negative numbers
- Pre-decrement `--` operator
- Custom vs built-in function comparison

## 🔄 Logic Diagram
[Read Number]
   ↓
[Number > 0?]
→ YES → [Return int(Number)]
→ NO  → [Return int(--Number)]
   ↓
[Print MyFloor & C++ floor side by side]

## 📥 Sample Input / Output
Please enter a number? → 3.7
My MyFloor Result : 3
C++ floor Result : 3

Please enter a number? → -3.7
My MyFloor Result : -4
C++ floor Result : -4