# Problem 19: Random Number Generator

## 📋 Description
A C++ program that generates a random number
within a specified range [From, To].
Example: RandomNumber(1, 10) → any number from 1 to 10

## 💡 Solution Overview
- `srand(time(NULL))` seeds the random generator with current time
- `RandomNumber()` uses the classic formula to get a number in range
- Formula: `rand() % (To - From + 1) + From`

## ⚠️ Note
Add `#include<ctime>` for proper use of `time(NULL)`.

## 🔑 Key Concepts
- `rand()` and `srand()` for random number generation
- `time(NULL)` as random seed
- Range mapping formula
- Reusable utility function

## 🔄 Logic Diagram
[Seed with time(NULL)]
   ↓
[rand() % (To - From + 1) + From]
   ↓
[Return number in range [From..To]]

## 📥 Sample Output
RandomNumber(1, 10) → 7
RandomNumber(1, 100) → 42