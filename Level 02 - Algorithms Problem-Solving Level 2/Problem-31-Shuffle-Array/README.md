# Problem 31: Shuffle Array

## 📋 Description
A C++ program that generates an ordered array [1,2,3,...,N]
then shuffles it randomly using swap operations.
Example: [1,2,3,4,5] → [3,1,5,2,4]

## 💡 Solution Overview
- `GenerateArrayInOrder()` fills array with sequential numbers 1..N
- `Swap()` swaps two elements by reference using a temp variable
- `ShuffleArray()` randomly swaps pairs of elements N times
- Result is a randomly shuffled version of the original array

## 🔑 Key Concepts
- Swap algorithm (temp variable pattern)
- Pass by reference for swap
- Random index generation for shuffling
- Array in-place modification

## 🔄 Logic Diagram
[Generate ordered array: 1,2,3...N]
   ↓
[For i = 0..N]
   ↓
[Pick 2 random indices]
   ↓
[Swap(Arr[random1], Arr[random2])]
   ↓
[Print shuffled array]

## 📥 Sample Input / Output
Enter number of elements: 5

Array Elements before shuffle:
1 2 3 4 5

Array Elements after shuffle:
3 1 5 2 4
