# Problem 22: Count Number Frequency In Array

## 📋 Description
A C++ program that reads an array from the user,
then counts how many times a specific number appears in it.
Example: [1,2,3,2,2], check 2 → appears 3 time(s)

## 💡 Solution Overview
- `ReadArray()` fills the array and sets its length via reference
- `PrintArray()` displays all elements in one line
- `TimesRepeated()` loops through array counting matches
- All functions work together cleanly in `main()`

## 🔑 Key Concepts
- Arrays in C++
- Pass by reference `&` for array length
- Frequency counter pattern
- Fixed-size array declaration `short Arr[100]`

## 🔄 Logic Diagram
[Read Array]
   ↓
[Read NumberToCheck]
   ↓
[Loop through Array]
   ↓
[Arr[i] == NumberToCheck?] → YES → [Counter++]
   ↓
[Print Counter]

## 📥 Sample Input / Output
Enter number of elements: 5
Element [1]: 1
Element [2]: 2
Element [3]: 3
Element [4]: 2
Element [5]: 2

Please enter the number you want to check: 2

Original array: 1 2 3 2 2
Number 2 is repeated 3 time(s)