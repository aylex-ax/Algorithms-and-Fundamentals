# Day of Week Mapper



## 🧠 Problem Description
This program converts a numerical input (1-7) into its corresponding day of the week (Sunday through Saturday). It uses an enumeration to map these values internally and ensures data integrity through range validation.

## ⚙️ Solution Overview
- **enWeekDay (Enum)**: Defines a custom type where `Sun = 1`, making the rest of the days follow automatically (Mon=2, etc.).
- **ReadNumberInRange()**: A utility function that forces the user to provide a valid number between 1 and 7.
- **GetDayOfWeek()**: A `switch-case` based function that returns the string representation of the day based on the enum value.
- **main()**: Orchestrates the input and output in a single, clean line of execution.

## 🛠️ Key Concepts
- Enumerations (`enum`)
- Range Validation
- Mapping Numbers to Strings
- Switch Statement logic