# Service Fee and Sales Tax Calculator



## 🧠 Problem Description
This program calculates the final amount of a restaurant bill after adding a 10% service fee and a 16% sales tax to the original bill amount.

## ⚙️ Solution Overview
- **ReadPositiveNumber()**: Ensures the original bill amount is a positive value.
- **TotalBillAfterServiceAndTax()**: 
    - First, it adds 10% service charge by multiplying the bill by $1.1$.
    - Then, it adds 16% sales tax by multiplying the result by $1.16$.
    - This sequential multiplication correctly applies tax on top of the service-inclusive amount.
- **main()**: Prints the original bill and the final total for comparison.

## 🛠️ Key Concepts
- Compound Percentage Calculation
- Arithmetic Assignment Operators (`*=`)
- Financial Data Handling
- Modular Function Design