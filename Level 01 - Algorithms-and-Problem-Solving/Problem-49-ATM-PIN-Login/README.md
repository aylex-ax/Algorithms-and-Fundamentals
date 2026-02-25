# ATM PIN Login System

## 🧠 Problem Description
This program simulates a simple ATM login process. It repeatedly asks the user for a PIN code and only grants access to the account balance if the correct PIN ("1234") is entered.

## ⚙️ Solution Overview
- **ReadPinCode()**: Captures the PIN as a string to preserve any leading zeros.
- **Login()**: 
    - Uses a `do...while` loop to keep the user trapped until the correct PIN is provided.
    - Uses `system("color 4F")` to turn the screen red upon a wrong entry.
    - Returns `true` (1) if the PIN matches "1234".
- **main()**: 
    - Checks the result of `Login()`.
    - If successful, it changes the screen to green (`color 2F`) and displays the balance.

## 🛠️ Key Concepts
- Boolean Functions
- String Comparison
- Console UI Enhancement (`system("color")`)
- Conditional Access Control