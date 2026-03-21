# Problem 41: Palindrome Array Checker

## 📋 Description
A C++ program that checks if an array is a palindrome.
An array is palindrome if it reads the same forwards and backwards.
Example: [10,20,30,30,20,10] → Palindrome ✅

## 💡 Solution Overview
- `FillArray()` fills array with known palindrome for testing
- `IsPalindromeArray()` compares elements from both ends toward center
- Uses `ceil(ArrayLength/2)` to only check half the array
- `enum enPalindromeOrNot` makes result expressive and readable

## ⚠️ Note
Use `ceil((float)ArrayLength/2)` to avoid integer division
giving wrong results with odd-length arrays.

## 🔑 Key Concepts
- Palindrome logic applied to arrays
- Two-pointer technique (start & end moving inward)
- `ceil()` for half-array traversal
- `enum` for expressive return values
- Mirror of Problem 11 (number palindrome)

## 🔄 Logic Diagram
[Fill Array: 10,20,30,30,20,10]
   ↓
[For i = 0..ceil(Length/2)]
   ↓
[arr[i] != arr[Length-1-i]?]
→ YES → [NotPalindrome ❌]
→ NO  → [Continue]
   ↓
[Return Palindrome ✅]

## 📥 Sample Output
Array 1 Elements:
10 20 30 30 20 10

Yes array is Palindrome ✅