# Problem 30: Sum Of Two Arrays

## 📋 Description
A C++ program that creates two arrays filled with random numbers,
then produces a third array containing the element-wise sum.
Example: [1,2,3] + [4,5,6] = [5,7,9]

## 💡 Solution Overview
- `ReadPositiveNumber()` gets the shared size for both arrays
- `FillArrayByRandomNumbers()` fills each array independently
- `SumOf2Arrays()` adds corresponding elements into a third array
- `PrintArray()` reused 3 times to display all arrays

## 🔑 Key Concepts
- Element-wise array operations
- Three-array pattern (A + B = C)
- Shared array length
- Function reusability

## 🔄 Logic Diagram
[Read ArrayLength]
   ↓
[Fill Array1 & Array2 with random numbers]
   ↓
[For i = 0..ArrayLength]
   ↓
[ArraySum[i] = Array1[i] + Array2[i]]
   ↓
[Print Array1, Array2, ArraySum]

## 📥 Sample Input / Output
Please enter size of arrays? → 3

Array 1 Elements:
10 20 30

Array 2 Elements:
40 50 60

Sum of array1 and array2 elements:
50 70 90