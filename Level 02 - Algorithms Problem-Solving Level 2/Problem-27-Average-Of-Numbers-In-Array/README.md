# Problem 27: Average Of Numbers In Array

## 📋 Description
A C++ program that fills an array with random numbers
then calculates and prints the average of all elements.
Example: [42, 17, 88, 5, 63] → Average = 43.0

## 💡 Solution Overview
- `FillArrayByRandomNumbers()` fills array with random values [1,100]
- `PrintArray()` displays all elements
- `SumOfNumbersInArray()` reused from Problem 26 to get total sum
- `AvgOfNumbersInArray()` divides sum by length with float cast

## 🔑 Key Concepts
- Function reusability (Sum reused inside Avg)
- `(float)` casting to avoid integer division
- Array traversal
- One-line function elegance

## 🔄 Logic Diagram
[Fill & Print Array]
   ↓
[SumOfNumbersInArray()] → Sum
   ↓
[(float)Sum / ArrayLength] → Average
   ↓
[Print Average]

## 📥 Sample Input / Output
Enter number of elements: 5

Array Elements: 42 17 88 5 63
Average of all Numbers is: 43.0