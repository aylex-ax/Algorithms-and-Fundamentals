# Sum Even Numbers From 1 to N



## 🧠 Problem Description
This program calculates the cumulative sum of all even numbers from $1$ up to a user-specified number $N$. The solution is implemented using three different looping mechanisms to demonstrate versatility.

## ⚙️ Solution Overview
- **enOddOrEven**: An enumeration to categorize numbers, making the code more readable and expressive.
- **CheckOddOrEven()**: A utility function that returns the parity of the number using the modulo operator `%`.
- **SumEvenNumbers Functions**: Three variations (`while`, `do...while`, `for`) that traverse the range and sum only the values where `CheckOddOrEven` returns `Even`.
- **main()**: Orchestrates the input, calculation, and output flow.

## 🛠️ Key Concepts
- Conditional Summation (Accumulator Pattern)
- Enumeration-based logic
- Code Reusability (DRY - Don't Repeat Yourself)
- Loop logic comparison