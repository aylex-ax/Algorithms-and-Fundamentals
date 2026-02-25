# Print Numbers From N to 1



## 🧠 Problem Description
This program takes a number $N$ from the user and prints numbers in descending order from $N$ down to $1$ using three different loop structures: `while`, `do...while`, and `for`.

## ⚙️ Solution Overview
- **ReadNumber()**: Gets the starting number $N$ from the user.
- **PrintFromNTo1_UsingWhile()**: Initializes the counter at $N+1$ and decrements before printing to reach $1$.
- **PrintFromNTo1_UsingDoWhile()**: Similar to the while loop but ensures the block executes once, decrementing the counter inside.
- **PrintFromNTo1_UsingFor()**: Uses a standard decrementing for loop `for (int i = N; i >= 1; i--)`.

## 🛠️ Key Concepts
- Reverse Iteration (Decrementing)
- Loop Conditions ($>$ and $\ge$)
- Comparison between Pre-test and Post-test loops
- Logic adjustment for counter-based loops