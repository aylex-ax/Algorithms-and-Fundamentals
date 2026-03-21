# Problem 32: Copy Array In Reverse Order

## 📋 Description
A C++ program that fills an array with random numbers,
then copies it into a second array in reversed order.
Example: [1,2,3,4,5] → [5,4,3,2,1]

## 💡 Solution Overview
- `FillArrayByRandomNumbers()` fills source array with random values [1,100]
- `CopyArrayInReverseOrder()` uses formula `ArrSource[ArrayLength-1-i]`
- Original array remains unchanged
- `PrintArray()` reused to display both arrays

## 🔑 Key Concepts
- Reverse index formula: `ArrayLength - 1 - i`
- Non-destructive operation (original untouched)
- Array copying with index manipulation
- Function reusability

## 🔄 Logic Diagram
[Fill Array1 with random numbers]
   ↓
[For i = 0..ArrayLength]
   ↓
[ArrDestination[i] = ArrSource[ArrayLength-1-i]]
   ↓
[Print Array1 & Array2]

## 📥 Sample Input / Output
Enter number of elements: 5

Array 1 Elements:
10 20 30 40 50

Array 2 Elements after copying array 1 in reversed order:
50 40 30 20 10