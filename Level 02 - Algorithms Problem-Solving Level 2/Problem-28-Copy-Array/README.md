# Problem 28: Copy Array

## 📋 Description
A C++ program that fills an array with random numbers
then copies all elements into a second array.
Example: Array1 [42, 17, 88] → Array2 [42, 17, 88]

## 💡 Solution Overview
- `FillArrayByRandomNumbers()` fills source array with random values
- `CopiedArray()` copies each element from source to destination
- `PrintArray()` reused to print both arrays for comparison

## 🔑 Key Concepts
- Array copying (element by element)
- Multiple arrays in memory
- Source & Destination pattern
- Function reusability

## 🔄 Logic Diagram
[Fill Array1 with random numbers]
   ↓
[For i = 0..ArrayLength]
   ↓
[ArrDestination[i] = ArrSource[i]]
   ↓
[Print Array1 & Array2]

## 📥 Sample Input / Output
Enter number of elements: 3

Array 1 Elements:
42 17 88

Array 2 elements after copy:
42 17 88