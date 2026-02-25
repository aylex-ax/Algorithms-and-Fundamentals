# Task Duration In Seconds



## 🧠 Problem Description
This program calculates the total duration of a task in seconds by taking the input in days, hours, minutes, and seconds from the user.

## ⚙️ Solution Overview
- **stTaskDuration (Struct)**: A structure to hold the time components (Days, Hours, Minutes, Seconds).
- **ReadTaskDuration()**: Populates the struct by prompting the user for each time unit using a positive number validator.
- **TaskDurationInSeconds()**: Implements the conversion logic:
    - $Days \times 24 \times 60 \times 60$
    - $Hours \times 60 \times 60$
    - $Minutes \times 60$
    - $Seconds$
- **main()**: Calls the conversion function and displays the total result in seconds.

## 🛠️ Key Concepts
- Structs for Data Organization
- Time Unit Conversion Math
- Reusable Input Validation
- Compound Addition