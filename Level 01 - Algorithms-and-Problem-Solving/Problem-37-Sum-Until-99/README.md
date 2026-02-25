# Sum Until -99



## 🧠 Problem Description
This program continuously reads numbers from the user and calculates their sum. The process stops immediately when the user enters the value `-99`.

## ⚙️ Solution Overview
- **ReadNumber()**: A helper function that takes a custom message and returns a float input.
- **SumNumbers()**: 
    - Uses a `do...while` loop to accumulate numbers.
    - Features a `Counter` to track the number of inputs.
    - Implements a `break` statement to ensure that the sentinel value (`-99`) is not added to the final sum.
- **main()**: Prints the final accumulated result.

## 🛠️ Key Concepts
- Sentinel-controlled loops.
- `break` statement usage.
- String concatenation with `to_string()`.
- Accumulator pattern (Summing variables).