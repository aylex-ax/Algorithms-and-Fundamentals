# Seconds to Task Duration Details



## 🧠 Problem Description
This program takes a large number of seconds and breaks it down into its constituent time components: Days, Hours, Minutes, and Seconds.

## ⚙️ Solution Overview
- **stTaskDuration (Struct)**: Used to store the calculated breakdown.
- **SecondsToTaskDurationDetails()**: 
    - Uses constant conversion factors for Days ($86,400s$), Hours ($3,600s$), and Minutes ($60s$).
    - Applies `floor()` for integer division and `%` (modulo) to keep track of remaining seconds after each unit is extracted.
- **PrintTaskDurationDetails()**: Displays the results in a clean `Days:Hours:Minutes:Seconds` format.

## 🛠️ Key Concepts
- Modulo Operator (`%`)
- Floor Division
- Constants for mathematical clarity
- Structural Data Return