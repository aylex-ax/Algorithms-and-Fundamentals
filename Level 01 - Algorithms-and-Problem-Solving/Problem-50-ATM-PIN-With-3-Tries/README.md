# Secure ATM PIN System (3 Attempts)

## 🧠 Problem Description
This program simulates an advanced ATM login system. It grants access to the account balance only if the correct PIN ("1234") is entered within a maximum of three attempts. If the user fails all tries, the system blocks the card.

## ⚙️ Solution Overview
- **ReadPinCode()**: Standard input function for the PIN string.
- **Login()**: 
    - Initializes a `counter` at 3.
    - Decrements the counter with each incorrect attempt.
    - Loop Condition: Continues as long as there are remaining tries (`counter >= 1`) AND the PIN is still incorrect.
    - Visual Feedback: Changes screen color to red on error and shows remaining attempts.
- **main()**: 
    - If `Login()` returns true: Access granted (Green screen).
    - If `Login()` returns false: Card blocked message is displayed.

## 🛠️ Key Concepts
- Counter-controlled loops.
- Logical AND operator (`&&`) in loop conditions.
- State-based UI changes.
- Practical Security Logic.