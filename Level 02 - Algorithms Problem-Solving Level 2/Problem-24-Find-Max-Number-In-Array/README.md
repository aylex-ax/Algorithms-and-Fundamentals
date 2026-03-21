# Problem 24: Find Max Number In Array

## 📋 Description
A C++ program that fills an array with random numbers
then finds and prints the maximum value.
Example: [42, 17, 88, 5, 63] → Max = 88

## 💡 Solution Overview
- `FillArrayByRandomNumbers()` fills array with random values [1,100]
- `PrintArray()` displays all elements
- `MaxNumberInArray()` initializes Max with first element then loops from index 1
- Smart initialization avoids wrong results with all-large or all-small arrays

## 🔑 Key Concepts
- Array traversal
- Max finding algorithm
- Smart initialization (`MaxNumber = Arr[0]`)
- Function reusability

## 🔄 Logic Diagram
[Fill & Print Array]
   ↓
[MaxNumber = Arr[0]]
   ↓
[For i = 1..ArrayLength]
   ↓
[Arr[i] > MaxNumber?] → YES → [MaxNumber = Arr[i]]
   ↓
[Return MaxNumber]

## 📥 Sample Input / Output
Enter number of elements: 5

Array Elements: 42 17 88 5 63
Max Number is: 88