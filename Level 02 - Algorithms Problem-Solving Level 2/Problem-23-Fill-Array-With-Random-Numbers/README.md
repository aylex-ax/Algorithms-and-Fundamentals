# Problem 23: Fill Array With Random Numbers

## 📋 Description
A C++ program that fills an array with random numbers
in the range [1, 100] and prints all elements.
Example: Array of 5 → [42, 17, 88, 5, 63]

## 💡 Solution Overview
- `RandomNumber()` generates a random number in given range
- `FillArrayByRandomNumbers()` fills each index with a random value
- `PrintArray()` displays all elements in one line
- `srand(time(NULL))` ensures different results each run

## ⚠️ Note
Add `#include<ctime>` for proper use of `time(NULL)`.

## 🔑 Key Concepts
- Arrays in C++
- Random number generation
- Pass by reference `&` for array length
- `srand()` seeding

## 🔄 Logic Diagram
[Read ArrayLength]
   ↓
[For i = 0..ArrayLength]
   ↓
[Arr[i] = RandomNumber(1,100)]
   ↓
[Print Array]

## 📥 Sample Input / Output
Enter number of elements: 5

Array Elements: 42 17 88 5 63