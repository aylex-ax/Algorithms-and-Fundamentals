# Problem 20: Palindrome Matrix

## 📋 Description
Checks whether every row in a 3x3 matrix reads the same forwards and backwards.

## 💡 Solution Overview
- `IsPalindromeMatrix()` compares `Matrix[i][j]` with `Matrix[i][Columns-1-j]` for each row, up to the row's midpoint

## 🔑 Key Concepts
- Two-pointer style comparison (mirrored indices)
- Palindrome-checking pattern applied to a 2D structure

## 📥 Sample Output
```
Yes: Matrix is Palindrome
```
