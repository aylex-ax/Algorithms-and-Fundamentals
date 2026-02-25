# Commission Calculator



## 🧠 Problem Description
This program calculates the sales commission for a salesperson based on their total sales volume. The commission percentage decreases as the sales volume increases (tiered system).

## ⚙️ Solution Overview
- **ReadTotalSales()**: Captures the total sales amount from the user.
- **GetComissionPercentage()**: Determines the percentage based on the following tiers:
    - $\ge$ 1,000,000: 1%
    - $\ge$ 500,000: 2%
    - $\ge$ 100,000: 3%
    - $\ge$ 50,000: 4%
    - Otherwise: 0%
- **GetTotalComission()**: Multiplies the total sales by the percentage to find the actual amount earned.
- **main()**: Prints both the percentage and the final commission.

## 🛠️ Key Concepts
- Decision Making (`if...else if`)
- Percentage Calculation
- Mathematical Modeling
- Functional Decomposition