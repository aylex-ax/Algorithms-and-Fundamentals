# Weeks and Days Calculator



## 🧠 Problem Description
This program converts a given number of hours into its equivalent in days and weeks. It provides a clear breakdown of how time scales up from hours to larger units.

## ⚙️ Solution Overview
- **ReadPositiveNumber()**: Ensures the input hours are greater than zero.
- **HoursToDays()**: Divides the total hours by 24 to get the number of days.
- **DaysToWeeks()**: Divides the number of days by 7 to get the number of weeks.
- **HoursToWeeks()**: (Helper) Directly converts hours to weeks by dividing by $(24 \times 7)$.
- **main()**: Orchestrates the conversion flow, passing the result of one conversion as the input to the next.

## 🛠️ Key Concepts
- Unit Conversion Logic
- Function Chaining (Passing output of one function to another)
- Precision handling with `float`
- Code Reusability