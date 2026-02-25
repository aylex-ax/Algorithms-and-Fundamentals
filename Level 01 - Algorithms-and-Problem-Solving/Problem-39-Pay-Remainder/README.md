# Pay Remainder Calculator



## 🧠 Problem Description
This program calculates the remainder (change) that should be returned to a customer after paying a bill. It ensures that both the bill amount and the cash paid are positive values.

## ⚙️ Solution Overview
- **ReadPositiveNumber()**: A robust function that forces the user to enter a value greater than zero, preventing logical errors in financial calculations.
- **CalculateRemainder()**: Performs a simple subtraction ($CashPaid - TotalBill$) to find the change amount.
- **main()**: Manages the inputs and displays a formatted summary including the bill, the paid amount, and the final remainder.

## 🛠️ Key Concepts
- Input Validation (Positive Floats)
- Basic Arithmetic Operations
- Formatting Output for better UX
- Function Reusability