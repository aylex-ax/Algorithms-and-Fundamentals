# Problem 11: Palindrome Number Checker

## 📋 Description
A C++ program that checks whether a number is a **Palindrome**.
A palindrome number reads the same forwards and backwards.
Example: 121 → Palindrome ✅ | 123 → Not Palindrome ❌

## 💡 Solution Overview
- `ReadPositiveNumber()` validates input — only accepts positive numbers
- `GetReverseNumber()` reverses the number
- `IsPalindromeNumber()` compares original with reversed — one elegant line!

## 🔑 Key Concepts
- Function reusability
- Palindrome logic (original == reversed)
- Clean one-line boolean return
- Function composition

## 🔄 Logic Diagram
[Read N]
   ↓
[GetReverseNumber(N)] → Reversed
   ↓
[N == Reversed?] → YES → [Palindrome ✅]
                → NO  → [Not Palindrome ❌]

## 📥 Sample Input / Output
Please enter positive number? → 121
Yes, it is palindrome number. ✅

Please enter positive number? → 123
No, it is not palindrome number. ❌