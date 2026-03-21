# Problem 16: Print Words From AAA to ZZZ

## 📋 Description
A C++ program that prints all 3-letter combinations
from AAA to ZZZ using uppercase letters.
Total combinations: 26 × 26 × 26 = 17,576 words

## 💡 Solution Overview
- `PrintWordsFromAAAtoZZZ()` uses 3 nested loops
- Each loop iterates from 65 ('A') to 90 ('Z')
- Each combination of i, j, k forms a 3-letter word
- Word is printed then reset for next combination

## 🔑 Key Concepts
- Triple nested `for` loops
- ASCII values (A=65 to Z=90)
- `char()` casting
- Combinatorics (26³ = 17,576)

## 🔄 Logic Diagram
[For i = A..Z]
   ↓
   [For j = A..Z]
      ↓
      [For k = A..Z]
         → [Print char(i)+char(j)+char(k)]

## 📥 Sample Output
AAA
AAB
AAC
...
ZZZ