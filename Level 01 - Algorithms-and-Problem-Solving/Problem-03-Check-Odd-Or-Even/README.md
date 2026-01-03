# Problem 03: Check Number is Odd or Even

## 📝 Description
A C++ program that asks the user to input a number and checks whether it is **Odd** or **Even** using functions and enums.

## 💡 Logic
The program uses the modulo operator `%` to determine the number type:
* **ReadNumber()**: Gets the integer input from the user.
* **CheckNumberType()**: Performs the calculation (`Number % 2`) and returns an `enum` value (Odd or Even).
* **PrintNumberType()**: Receives the enum and prints the result accordingly.