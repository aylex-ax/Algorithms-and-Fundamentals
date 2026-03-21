# Problem 40: Copy Distinct Numbers To Array

## 📋 Description
A C++ program that takes an array with duplicate values
and copies only the unique (distinct) numbers into a second array.
Example: [10,10,50,70,70,90] → Distinct: [10,50,70,90]

## 💡 Solution Overview
- `FillArray()` fills source with known duplicates for testing
- `IsNumberInArray()` checks if element already exists in destination
- `CopyDistinctNumbers()` only adds element if NOT already in destination
- Reuses `FindNumberPositionInArray()`, `IsNumberInArray()`, `AddArrayElement()`

## 🔑 Key Concepts
- Distinct/Unique filtering algorithm
- `IsNumberInArray` as guard condition
- Building unique set from duplicates
- Layered function reusability

## 🔄 Logic Diagram
[Fill ArraySource with duplicates]
   ↓
[For i = 0..ArrayLength]
   ↓
[IsNumberInArray(Destination, ArrSource[i])?]
→ NO  → [AddArrayElement to Destination]
→ YES → [Skip - already exists]
   ↓
[Print ArraySource & ArrayDestination]

## 📥 Sample Output
Array 1 Elements:
10 10 10 50 50 70 70 70 70 90

Array 2 Distinct numbers:
10 50 70 90