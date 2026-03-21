# Problem 43: Count Even Numbers In Array

## 📋 Description
A C++ program that fills an array with random numbers,
then counts how many even numbers exist in it.
Example: [42,17,88,5,63] → Even count: 2

## 💡 Solution Overview
- `FillArrayByRandomNumbers()` fills array with random values [1,100]
- `CheckOddOrEven()` reused to classify each number
- `CountEvenNumbersInArray()` increments counter for each even number
- Mirror logic of Problem 42 (odd counter) ✨

## 🔑 Key Concepts
- Conditional counting pattern
- `enum` for odd/even classification
- Function reusability
- Mirror of Problem 42

## 🔄 Logic Diagram
[Fill & Print Array]
   ↓
[EvenCounter = 0]
   ↓
[For i = 0..ArrayLength]
   ↓
[CheckOddOrEven(Arr[i]) == Even?]
→ YES → [EvenCounter++]
→ NO  → [Skip]
   ↓
[Print EvenCounter]

## 📥 Sample Input / Output
Enter number of elements: 5

Array Elements:
42 17 88 5 63

Even Numbers count is: 2