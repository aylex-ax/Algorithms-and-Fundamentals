# Grade Letter Calculator



## 🧠 Problem Description
This program converts a numerical grade (0-100) into a letter grade (A, B, C, D, E, F) based on specific ranges.

## ⚙️ Solution Overview
- **ReadNumberInRange()**: Prompts the user to enter a grade and uses a `do...while` loop to ensure the input is valid (between 0 and 100).
- **GetGradeLetter()**: Implements multiple `if...else if` statements to categorize the numerical grade:
    - 90-100: A
    - 80-89: B
    - 70-79: C
    - 60-69: D
    - 50-59: E
    - Below 50: F
- **main()**: Orchestrates the input and displays the resulting letter.

## 🛠️ Key Concepts
- Input Validation
- Conditional Branching (`if...else if`)
- Logical Operators (`||`)
- Function Composition