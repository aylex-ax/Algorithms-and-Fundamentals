# Problem 34: Find Number Position In Array

## 📋 Description
A C++ program that fills an array with random numbers,
then searches for a specific number using Linear Search.
Returns the position (index) or -1 if not found.
Example: [42,17,88,5,63], search 88 → found at position 2 (order 3)

## 💡 Solution Overview
- `FillArrayByRandomNumbers()` fills array with random values [1,100]
- `FindNumberPositionInArray()` implements Linear Search
- Returns index if found, -1 if not found (professional convention)
- Displays both index (0-based) and order (1-based) for clarity

## 🔑 Key Concepts
- Linear Search algorithm
- Return -1 convention for "not found"
- 0-based index vs 1-based order
- Early return on match

## 🔄 Logic Diagram
[Fill & Print Array]
   ↓
[Read NumberToSearch]
   ↓
[For i = 0..ArrayLength]
   ↓
[Arr[i] == NumberToSearch?] → YES → [Return i]
                            → NO  → [Continue]
   ↓
[Return -1 if not found]
   ↓
[Position == -1?] → YES → [Not Found 😢]
                 → NO  → [Print Position & Order ✅]

## 📥 Sample Input / Output
Enter number of elements: 5
Array 1 Elements: 42 17 88 5 63

Please enter a number to search for? → 88

Number you are looking for is: 88
The number found at position: 2
The number found its order: 3