# Problem 39: Copy Prime Numbers To Array

## 📋 Description
A C++ program that fills an array with random numbers,
then copies only the prime numbers into a second array.
Example: [42,17,88,5,63] → Primes: [17,5]

## 💡 Solution Overview
- `CheckPrime()` reused from Problem 02 to validate each number
- `AddArrayElement()` reused from Problem 36 to append primes
- `CopyPrimeNumbers()` filters source array keeping only primes
- Cleaner than Problem 29 — uses AddArrayElement instead of manual counter

## 🔑 Key Concepts
- Prime checking algorithm reuse
- Array filtering with condition
- `AddArrayElement` as building block
- Evolution of Problem 29 with better design

## 🔄 Logic Diagram
[Fill ArraySource with random numbers]
   ↓
[For i = 0..ArrayLength]
   ↓
[CheckPrime(ArrSource[i]) == Prime?]
→ YES → [AddArrayElement to ArrayDestination]
→ NO  → [Skip]
   ↓
[Print ArraySource & ArrayDestination]

## 📥 Sample Input / Output
Enter number of elements: 5

Array 1 Elements:
42 17 88 5 63

Array 2 Prime numbers:
17 5