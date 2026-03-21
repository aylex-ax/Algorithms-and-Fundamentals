# Problem 37: Copy Array Using AddArrayElement

## 📋 Description
A C++ program that copies an array into another
by reusing the `AddArrayElement()` function instead of direct assignment.
Example: [42,17,88] → copy → [42,17,88]

## 💡 Solution Overview
- `FillArrayByRandomNumbers()` fills source array with random values
- `AddArrayElement()` reused from Problem 36 to append each element
- `CopyArrayUsingAddArrayElement()` loops through source calling AddArrayElement
- Different approach to copying vs Problem 28 — same result, smarter reuse

## 🔑 Key Concepts
- Function reusability in a new context
- Array copying via AddArrayElement
- Pass by reference for destination length
- Alternative approach to direct copy (Problem 28)

## 🔄 Logic Diagram
[Fill ArraySource with random numbers]
   ↓
[For i = 0..ArrayLength]
   ↓
[AddArrayElement(ArrSource[i], ArrDestination, Array2Length)]
   ↓
[Print ArraySource & ArrayDestination]

## 📥 Sample Input / Output
Enter number of elements: 3

Array 1 Elements: 42 17 88
Array 2 Elements after copy: 42 17 88