# Problem 17: Brute Force Password Guesser

## 📋 Description
A C++ program that simulates a **Brute Force** attack
to guess a 3-letter uppercase password (AAA to ZZZ).
It tries every possible combination until it finds the match.
Maximum attempts: 26 × 26 × 26 = 17,576 trials

## 💡 Solution Overview
- `ReadPassword()` reads the target password from user
- `GuessPassword()` loops through all combinations AAA→ZZZ
- Prints each trial with its number
- Stops immediately when password is found and shows trial count

## 🔑 Key Concepts
- Brute Force algorithm
- Triple nested `for` loops
- ASCII values (A=65 to Z=90)
- Early exit on match
- Trial counter pattern

## 🔄 Logic Diagram
[Read Password]
   ↓
[For i,j,k = A..Z]
   ↓
[word = char(i)+char(j)+char(k)]
[Print Trial[counter]: word]
   ↓
[word == Password?] → YES → [Print Result & Return ✅]
                   → NO  → [counter++ & Continue]

## 📥 Sample Input / Output
Please enter a 3-letter password (all capital)? → ABC

Trial [1]: AAA
Trial [2]: AAB
Trial [3]: AAC
...
Trial [28]: ABC
Password is ABC
Found after 28 Trial(s)