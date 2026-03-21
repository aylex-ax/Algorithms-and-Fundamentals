# Problem 42: Count Odd Numbers In Array

## 📋 Description
A C++ program that fills an array with random numbers,
then counts how many odd numbers exist in it.
Example: [42,17,88,5,63] → Odd count: 3

## 💡 Solution Overview
- `FillArrayByRandomNumbers()` fills array with random values [1,100]
- `CheckOddOrEven()` reused from Problem 38 to classify each number
- `CountOddNumbersInArray()` increments counter for each odd number found
- Result printed directly in `main()`

## 🔑 Key Concepts
- Conditional counting pattern
- `enum` for odd/even classification
- Function reusability
- Accumulator pattern (OddCounter++)

## 🔄 Logic Diagram
[Fill & Print Array]
   ↓
[OddCounter = 0]
   ↓
[For i = 0..ArrayLength]
   ↓
[CheckOddOrEven(Arr[i]) == Odd?]
→ YES → [OddCounter++]
→ NO  → [Skip]
   ↓
[Print OddCounter]

## 📥 Sample Input / Output
Enter number of elements: 5

Array Elements:
42 17 88 5 63

Odd Numbers count is: 3