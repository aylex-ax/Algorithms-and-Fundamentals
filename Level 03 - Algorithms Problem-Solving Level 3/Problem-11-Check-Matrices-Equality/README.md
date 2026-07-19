# Problem 11: Check Matrices Equality

## 📋 Description
Fills two 3x3 matrices with random numbers and checks whether they are "equal".

## 💡 Solution Overview
- `AreEqualMatrices()` compares the total sum of both matrices using `SumOfMatrix()`

## 🔑 Key Concepts
- Function reuse (`SumOfMatrix`)
- Note: comparing sums is not true equality — two different matrices can share the same total sum and be reported as equal. Genuine equality needs an element-by-element comparison (see Problem 12's approach).

## 📥 Sample Output
```
No: Matrices are Not Equal
```
