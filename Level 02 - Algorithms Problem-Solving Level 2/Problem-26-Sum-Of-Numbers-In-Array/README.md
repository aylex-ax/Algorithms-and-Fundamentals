# Problem 26: Sum Of Numbers In Array

## 📋 Description
A C++ program that fills an array with random numbers
then calculates and prints the sum of all elements.
Example: [42, 17, 88, 5, 63] → Sum = 215

## 💡 Solution Overview
- `FillArrayByRandomNumbers()` fills array with random values [1,100]
- `PrintArray()` displays all elements
- `SumOfNumbersInArray()` accumulates all values into Sum starting from 0

## ⚠️ Note
Consider using `int` instead of `short` for Sum
to avoid overflow with large arrays or large values.

## 🔑 Key Concepts
- Array traversal
- Accumulator pattern (Sum = 0 then Sum += Arr[i])
- Function reusability
- Potential overflow awareness

## 🔄 Logic Diagram
[Fill & Print Array]
   ↓
[Sum = 0]
   ↓
[For i = 0..ArrayLength]
   ↓
[Sum += Arr[i]]
   ↓
[Return Sum]

## 📥 Sample Input / Output
Enter number of elements: 5

Array Elements: 42 17 88 5 63
Sum of all Numbers is: 215