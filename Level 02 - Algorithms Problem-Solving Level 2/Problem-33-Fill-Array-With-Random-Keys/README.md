# Problem 33: Fill Array With Random Keys

## 📋 Description
A C++ program that generates N random activation keys
in format XXXX-XXXX-XXXX-XXXX and stores them in an array.
Example: 3 keys → ["ABRK-LMZQ-TDXW-OPNJ", "GCFH-YUIV-BNSM-RWEK", ...]

## 💡 Solution Overview
- `GenerateKey()` reused from Problem 21 to create each key
- `FillArrayByKeys()` fills a string array with generated keys
- `PrintStringArray()` displays each key with its index
- First time using `string` array instead of `short` array

## 🔑 Key Concepts
- String arrays in C++
- Combining Key Generator with Arrays
- Array of strings
- Function reusability across multiple problems

## 🔄 Logic Diagram
[Read NumberOfKeys]
   ↓
[For i = 0..NumberOfKeys]
   ↓
[Arr[i] = GenerateKey()]
   ↓
[Print Array[i]: Key]

## 📥 Sample Input / Output
Please enter number of keys? → 3

Array Elements:

Array[0]: ABRK-LMZQ-TDXW-OPNJ
Array[1]: GCFH-YUIV-BNSM-RWEK
Array[2]: PQTX-ALZD-MNBV-CRKJ