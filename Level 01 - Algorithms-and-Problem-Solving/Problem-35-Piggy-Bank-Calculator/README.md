# Piggy Bank Calculator



## 🧠 Problem Description
This program calculates the total amount of money in a piggy bank based on the count of different coin denominations (Pennies, Nickels, Dimes, Quarters, and Dollars).

## ⚙️ Solution Overview
- **stPiggyBankContent (Struct)**: A custom data structure to store the count of each coin type.
- **ReadPiggyBankContent()**: Prompts the user to enter the quantity of each denomination and returns the populated struct.
- **calculateTotalPennies()**: Converts all denominations into pennies using the following multipliers:
    - Penny: 1
    - Nickel: 5
    - Dime: 10
    - Quarter: 25
    - Dollar: 100
- **main()**: Calculates the total pennies and converts them to dollars (float) for a user-friendly output.

## 🛠️ Key Concepts
- Structs (Grouping related data)
- Multi-input handling
- Type Casting (`float`)
- Unit conversion logic