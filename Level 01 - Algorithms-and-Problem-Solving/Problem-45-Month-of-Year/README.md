# Month of Year Mapper



## 🧠 Problem Description
This program converts a numerical input ranging from 1 to 12 into its corresponding month name (January through December). It leverages C++ Enumerations for internal representation and ensures input validity.

## ⚙️ Solution Overview
- **enYearMonth (Enum)**: Maps integer values to month abbreviations starting from `Jan = 1`.
- **ReadNumberInRange()**: Guarantees that the program only processes numbers between 1 and 12, re-prompting the user otherwise.
- **GetMonthOfYear()**: Translates the `enum` value into a full string name using a `switch` statement.
- **main()**: Connects the input and output functions for a streamlined execution.

## 🛠️ Key Concepts
- Strong Typing with `enum`.
- Input Validation Loops.
- String Mapping.
- Control Flow (`switch...case`).