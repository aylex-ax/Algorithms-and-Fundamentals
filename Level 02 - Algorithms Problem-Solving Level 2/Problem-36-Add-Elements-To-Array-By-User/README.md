3️⃣ README English
markdown# Problem 36: Add Elements To Array By User

## 📋 Description
A C++ program that lets the user add numbers to an array
one by one, asking after each if they want to continue.
Example: User adds 5, 10, 15 → Array: [5, 10, 15]

## 💡 Solution Overview
- `ReadNumber()` reads a single number from user
- `AddArrayElement()` appends number to array and increments length
- `InputUserNumberInArray()` loops with do-while asking to continue
- `PrintArray()` displays final array with its length

## 🔑 Key Concepts
- Dynamic array building (user-driven)
- `do-while` for at least one iteration
- Pass by reference for array length
- `bool` flag for continue/stop decision

## 🔄 Logic Diagram
[Do]
   ↓
[Read Number]
[AddArrayElement(Number)]
   ↓
[Ask: Add more? 0/1]
   ↓
[While AddMore == true]
   ↓
[Print Array & Length]

## 📥 Sample Input / Output
Please enter a number? → 5
Do you want to add numbers? [0]:No, [1]:Yes? → 1
Please enter a number? → 10
Do you want to add numbers? [0]:No, [1]:Yes? → 1
Please enter a number? → 15
Do you want to add numbers? [0]:No, [1]:Yes? → 0

Array Length: 3
Array Elements: 5 10 15