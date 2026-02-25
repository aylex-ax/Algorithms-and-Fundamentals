# Power of M



## 🧠 Problem Description
This program calculates the result of a number (Base) raised to a specific power (Exponent) $N^M$, where both the base and the exponent are provided by the user.

## ⚙️ Solution Overview
- **ReadNumber()**: Asks the user for the base number.
- **ReadPower()**: Asks the user for the exponent (power) value.
- **PowerOfM()**: 
    - Handles the special case where if the power is $0$, the result is $1$.
    - Uses a `for` loop to multiply the base by itself $M$ times.
- **main()**: Executes the logic and prints the final result.

## 🛠️ Key Concepts
- Exponentiation Logic
- Loops for repetitive multiplication
- Special Case Handling (Power of 0)
- Functional Programming