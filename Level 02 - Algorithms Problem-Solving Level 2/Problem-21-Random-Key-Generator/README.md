# Problem 21: Random Key Generator

## 📋 Description
A C++ program that generates random activation keys
in the format: XXXX-XXXX-XXXX-XXXX (like Windows license keys).
User specifies how many keys to generate.

## 💡 Solution Overview
- `RandomNumber()` generates numbers in a range
- `GetRandomCharacter()` maps char type to ASCII range
- `GenerateWord()` builds a random string of given type & length
- `GenerateKey()` combines 4 groups of 4 capital letters with '-'
- `GenerateKeys()` loops and prints N keys

## 🔑 Key Concepts
- Function composition (building complex from simple)
- `enum` for character type selection
- String concatenation
- Layered architecture of functions

## 🔄 Logic Diagram
[Read N]
   ↓
[For i = 1..N]
   ↓
[GenerateKey()]
   ↓
[GenerateWord(Capital,4)] × 4 joined by '-'
   ↓
[Print Key[i]: XXXX-XXXX-XXXX-XXXX]

## 📥 Sample Input / Output
Please enter how many keys to generate? → 3

Key [1] : ABRK-LMZQ-TDXW-OPNJ
Key [2] : GCFH-YUIV-BNSM-RWEK
Key [3] : PQTX-ALZD-MNBV-CRKJ