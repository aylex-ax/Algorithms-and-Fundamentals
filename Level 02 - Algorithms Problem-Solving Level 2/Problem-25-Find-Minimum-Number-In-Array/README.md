# Problem 25: Find Minimum Number In Array

## 📋 Description
A C++ program that fills an array with random numbers
then finds and prints the minimum value.
Example: [42, 17, 88, 5, 63] → Min = 5

## 💡 Solution Overview
- `FillArrayByRandomNumbers()` fills array with random values [1,100]
- `PrintArray()` displays all elements
- `MinimumNumberInArray()` initializes Min with first element then loops from index 1
- Mirror logic of Problem 24 (Max finder) ✨

## 🔑 Key Concepts
- Array traversal
- Min finding algorithm
- Smart initialization (`MinimumNumber = Arr[0]`)
- Function reusability

## 🔄 Logic Diagram
[Fill & Print Array]
   ↓
[MinimumNumber = Arr[0]]
   ↓
[For i = 1..ArrayLength]
   ↓
[Arr[i] < MinimumNumber?] → YES → [MinimumNumber = Arr[i]]
   ↓
[Return MinimumNumber]

## 📥 Sample Input / Output
Enter number of elements: 5

Array Elements: 42 17 88 5 63
Minimum Number is: 5