# Read Until Valid Age



[Image of do-while loop flow chart]


## 🧠 Problem Description
This program continues to prompt the user to enter their age until they provide a value that falls within the valid range of 18 to 45.

## ⚙️ Solution Overview
- **ReadAge()**: A simple function to capture the user's input.
- **ValidateNumberinRange()**: Checks if the entered age is within the specified boundaries.
- **ReadUntilAgeBetween()**: Uses a `do...while` loop to repeatedly call `ReadAge()` as long as the input is invalid (logical NOT of the validation result).
- **PrintResult()**: Displays the final valid age once the loop terminates.

## 🛠️ Key Concepts
- `do...while` Loop
- Logical NOT Operator (`!`)
- Input Validation Loops
- Reusing existing functions (Modularization)