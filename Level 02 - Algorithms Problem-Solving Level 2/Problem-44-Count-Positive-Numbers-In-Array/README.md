# Problem 44: Count Positive Numbers In Array

## 📋 Description
A C++ program that fills an array with random numbers (including negatives),
then counts how many positive numbers exist in it.
Example: [-42,17,-88,5,63] → Positive count: 3

## 💡 Solution Overview
- `FillArrayByRandomNumbers()` fills array with random values [-100,100]
- `CheckPositiveOrNegative()` uses enum to classify each number
- `CountPositiveNumbersInArray()` increments counter for each positive
- Range changed to [-100,100] to include negative numbers

## 🔑 Key Concepts
- `enum` for positive/negative classification
- Extended range to include negatives [-100,100]
- Conditional counting pattern
- Function reusability

## 🔄 Logic Diagram
[Fill & Print Array (-100 to 100)]
   ↓
[PositiveCounter = 0]
   ↓
[For i = 0..ArrayLength]
   ↓
[CheckPositiveOrNegative(Arr[i]) == Positive?]
→ YES → [PositiveCounter++]
→ NO  → [Skip]
   ↓
[Print PositiveCounter]

## 📥 Sample Input / Output
Enter number of elements: 5

Array Elements:
-42 17 -88 5 63

Positive Numbers count is: 3