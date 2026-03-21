# Problem 45: Count Negative Numbers In Array

## 📋 Description
A C++ program that fills an array with random numbers (including negatives),
then counts how many negative numbers exist in it.
Example: [-42,17,-88,5,63] → Negative count: 2

## 💡 Solution Overview
- `FillArrayByRandomNumbers()` fills array with random values [-100,100]
- `CheckPositiveOrNegative()` reused to classify each number
- `CountNegativeNumbersInArray()` increments counter for each negative
- Mirror logic of Problem 44 (positive counter) ✨

## 🔑 Key Concepts
- `enum` for positive/negative classification
- Range [-100,100] to include negatives
- Conditional counting pattern
- Mirror of Problem 44

## 🔄 Logic Diagram
[Fill & Print Array (-100 to 100)]
   ↓
[NegativeCounter = 0]
   ↓
[For i = 0..ArrayLength]
   ↓
[CheckPositiveOrNegative(Arr[i]) == Negative?]
→ YES → [NegativeCounter++]
→ NO  → [Skip]
   ↓
[Print NegativeCounter]

## 📥 Sample Input / Output
Enter number of elements: 5

Array Elements:
-42 17 -88 5 63

Negative Numbers count is: 2