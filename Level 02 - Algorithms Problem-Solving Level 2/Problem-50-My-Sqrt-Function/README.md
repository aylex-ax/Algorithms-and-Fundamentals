# Problem 50: My Sqrt Function

## 📋 Description
A C++ program that implements a custom square root function
using `pow(Number, 0.5)` and compares it with built-in `sqrt()`.
Example: 25 → MySqrt = 5 ✅
Example: 16 → MySqrt = 4 ✅

## 💡 Solution Overview
- `MySqrt()` uses `pow(Number, 0.5)` as mathematical equivalent of sqrt
- Result cast to `short` (truncates decimal)
- Compared side by side with built-in `sqrt()`
- Shows understanding of mathematical relationship: √N = N^0.5

## ⚠️ Note
Using `short` as return type truncates decimal results.
For precise results use `float` instead.
Example: sqrt(2) = 1.414 → short gives 1 (loses precision)

## 🔑 Key Concepts
- Square root via `pow(N, 0.5)` mathematical identity
- `short` vs `float` precision trade-off
- Custom vs built-in function comparison
- Mathematical function implementation

## 🔄 Logic Diagram
[Read Number]
   ↓
[pow(Number, 0.5)] → Square Root
   ↓
[Cast to short]
   ↓
[Print MySqrt & C++ sqrt side by side]

## 📥 Sample Input / Output
Please enter a number? → 25
My MySqrt Result : 5
C++ sqrt Result : 5

Please enter a number? → 2
My MySqrt Result : 1
C++ sqrt Result : 1.41421