# Problem 35: Is Number In Array

## 📋 Description
A C++ program that fills an array with random numbers,
then checks if a specific number exists in it.
Returns true/false instead of a position.
Example: [42,17,88,5,63], search 88 → Yes, found! ✅

## 💡 Solution Overview
- `FindNumberPositionInArray()` reused from Problem 34
- `IsNumberInArray()` wraps it in a clean one-line bool return
- Returns `true` if position != -1, `false` otherwise
- Cleaner interface when position is not needed

## 🔑 Key Concepts
- Boolean wrapper function
- Reusing search function from Problem 34
- `!= -1` as existence check
- Clean one-line bool return
- Abstraction (hiding implementation details)

## 🔄 Logic Diagram
[Fill & Print Array]
   ↓
[Read NumberToSearch]
   ↓
[FindNumberPositionInArray() != -1?]
   ↓
[YES] → [Found ✅]
[NO]  → [Not Found ❌]

## 📥 Sample Input / Output
Enter number of elements: 5
Array 1 Elements: 42 17 88 5 63

Please enter a number to search for? → 88
Number you are looking for is: 88
Yes, The Number is found :-)

Please enter a number to search for? → 99
Number you are looking for is: 99
No, The Number is not found :-(