# Problem 02: Print Prime Numbers From 1 to N

## 📋 Description
A C++ program that reads a positive number N from the user
and prints all prime numbers from 1 to N.

## 💡 Solution Overview
- `ReadPositiveNumber()` validates input — only accepts positive numbers
- `CheckPrime()` checks if a number is prime by testing divisors up to N/2
- `PrintPrimeNumbersFrom1ToN()` loops from 1 to N and prints primes only
- `enum enPrimeNotPrime` makes the code more readable and expressive

## 🔑 Key Concepts
- `enum` for named return values
- Input validation with `do-while`
- Prime checking algorithm (trial division up to N/2)
- Function decomposition

## 🔄 Logic Diagram
[Read N] → [Loop 1..N]
               ↓
         [CheckPrime(i)]
         ↓           ↓
      [Prime]     [NotPrime]
         ↓
    [Print i]

## 📥 Sample Input / Output
Please enter a positive number? → 20

The prime numbers from 1 to 20 are:
1, 2, 3, 5, 7, 11, 13, 17, 19