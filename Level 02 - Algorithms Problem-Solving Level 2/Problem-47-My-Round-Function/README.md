1️⃣ تقييم الكود

 المنطق صحيح 100%
 GetFractionPart() منفصلة — تصميم ممتاز 🔥
 معالجة الأرقام السالبة في الـ rounding ذكية جداً ✨
 استخدام abs() للـ FractionPart عشان يشتغل مع السالب صح
 المقارنة مع round() المدمجة فكرة تعليمية رائعة
 تايبو بسيط: S زيادة في آخر الكود 😄


2️⃣ Folder Name
Problem-47-My-Round-Function

3️⃣ README English
markdown# Problem 47: My Round Function

## 📋 Description
A C++ program that implements a custom rounding function
and compares its result with the built-in C++ `round()` function.
Example: 3.7 → MyRound = 4, C++ round = 4 ✅
Example: -3.7 → MyRound = -4, C++ round = -4 ✅

## 💡 Solution Overview
- `GetFractionPart()` extracts decimal part via `Number - int(Number)`
- `MyRound()` checks if abs(fraction) >= 0.5 then rounds up/down
- Handles both positive and negative numbers correctly
- Result compared side by side with built-in `round()`

## 🔑 Key Concepts
- Fraction extraction: `Number - int(Number)`
- Rounding logic (>= 0.5 → round away from zero)
- Negative number handling in rounding
- `abs()` for fraction comparison
- Custom vs built-in function comparison

## 🔄 Logic Diagram
[Read Number]
   ↓
[GetFractionPart = Number - int(Number)]
   ↓
[abs(FractionPart) >= 0.5?]
→ YES → [Number > 0?] → YES → [++IntegerPart]
                      → NO  → [--IntegerPart]
→ NO  → [Return IntegerPart]

## 📥 Sample Input / Output
Please enter a number? → 3.7
My Round Result : 4
C++ Round Result : 4

Please enter a number? → -3.7
My Round Result : -4
C++ Round Result : -4