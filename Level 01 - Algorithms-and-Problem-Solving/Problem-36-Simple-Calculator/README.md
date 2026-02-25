# Simple Calculator



## 🧠 Problem Description
This program acts as a simple calculator that performs basic arithmetic operations (Addition, Subtraction, Multiplication, and Division) based on user input.

## ⚙️ Solution Overview
- **enOperationType (Enum)**: Maps the operation symbols (`+`, `-`, `*`, `/`) to an enumeration for better code readability.
- **ReadNumber()**: A reusable function to capture numeric inputs from the user.
- **OperationType()**: Captures the operator character and casts it to the defined `enum`.
- **Calculate()**: Uses a `switch` statement to execute the corresponding mathematical operation based on the chosen operator.
- **main()**: Coordinates the flow from input to result display.

## 🛠️ Key Concepts
- Enumerations with custom underlying values.
- `switch...case` branching.
- Explicit Type Casting `(enOperationType)OT`.
- Basic Arithmetic Logic.