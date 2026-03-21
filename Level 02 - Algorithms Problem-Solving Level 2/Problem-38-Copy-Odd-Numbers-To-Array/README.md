# Problem 38: Copy Odd Numbers To Array

## 📋 Description
A C++ program that fills an array with random numbers,
then copies only the odd numbers into a second array.
Example: [42,17,88,5,63] → Odd: [17,5,63]

## 💡 Solution Overview
- `CheckOddOrEven()` uses enum to classify each number
- `AddArrayElement()` reused from Problem 36 to append odd numbers
- `CopyOddNumbers()` filters source array keeping only odd values
- Combines enum + filter + array building in one clean solution

## 🔑 Key Concepts
- `enum` for odd/even classification
- Array filtering with condition
- Combining multiple reusable functions
- Pass by reference for destination length

## 🔄 Logic Diagram
[Fill ArraySource with random numbers]
   ↓
[For i = 0..ArrayLength]
   ↓
[CheckOddOrEven(ArrSource[i]) == Odd?]
→ YES → [AddArrayElement to ArrayDestination]
→ NO  → [Skip]
   ↓
[Print ArraySource & ArrayDestination]

## 📥 Sample Input / Output
Enter number of elements: 5

Array 1 Elements:
42 17 88 5 63

Array 2 Odd numbers:
17 5 63