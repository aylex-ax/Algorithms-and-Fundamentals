# Check Prime Number



## 🧠 Problem Description
This program determines whether a given positive integer is a **Prime Number** or not. A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.

## ⚙️ Solution Overview
- **ReadPositiveNumber()**: Ensures the input is a positive integer.
- **CheckPrime()**: 
    - It iterates from 2 up to $N/2$.
    - If the number is divisible by any of these values (using `%`), it is flagged as `NotPrime`.
    - Otherwise, it returns `Prime`.
- **PrintNumberType()**: Interprets the enum result and prints a friendly message.

## 🛠️ Key Concepts
- Prime Number Mathematical Logic
- Loop Optimization (Searching up to $N/2$)
- Enumerations (`enum`)
- Modulo Operator for divisibility