# Problem 29: Copy Only Prime Numbers To Array

## 📋 Description
A C++ program that fills an array with random numbers,
then copies only the prime numbers into a second array.
Example: [42, 17, 88, 5, 63] → Primes: [17, 5]

## 💡 Solution Overview
- `CheckPrime()` reused from Problem 02 to validate each number
- `FillArrayByRandomNumbers()` fills source array with random values [1,100]
- `CopyOnlyPrimeNumbers()` filters primes using separate counter for destination
- `Array2Length` passed by reference to track actual prime count

## ⚠️ Note
`Array2Length = --counter` causes -1 when no primes found.
Use `Array2Length = counter` instead for correct behavior.

## 🔑 Key Concepts
- Array filtering
- Combining multiple algorithms (Prime check + Array copy)
- Separate index tracking for source & destination
- Pass by reference for output length

## 🔄 Logic Diagram
[Fill Array1 with random numbers]
   ↓
[For i = 0..Array1Length]
   ↓
[CheckPrime(Arr[i])?] → YES → [Array2[counter] = Arr[i], counter++]
                      → NO  → [Skip]
   ↓
[Array2Length = counter]
[Print Array1 & Array2]

## 📥 Sample Input / Output
Enter number of elements: 5

Array 1 Elements:
42 17 88 5 63

Prime numbers in Array 2:
17 5