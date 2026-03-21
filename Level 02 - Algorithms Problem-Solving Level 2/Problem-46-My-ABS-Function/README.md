# Problem 46: My ABS Function

## 📋 Description
A C++ program that implements a custom absolute value function
and compares its result with the built-in C++ `abs()` function.
Example: -7.5 → MyABS = 7.5, C++ abs = 7.5 ✅

## 💡 Solution Overview
- `MyABS()` returns `Number * -1` if negative, else returns as-is
- `ReadNumber()` reads a float from the user
- Result compared side by side with built-in `abs()`
- Proves understanding of how abs() works internally

## 🔑 Key Concepts
- Absolute value logic (manual implementation)
- `float` data type
- Comparing custom vs built-in functions
- Negative number handling

## 🔄 Logic Diagram
[Read Number]
   ↓
[Number < 0?]
→ YES → [Return Number * -1]
→ NO  → [Return Number]
   ↓
[Print MyABS & C++ abs side by side]

## 📥 Sample Input / Output
Please enter a number? → -7.5

My abs Result : 7.5
C++ abs Result : 7.5