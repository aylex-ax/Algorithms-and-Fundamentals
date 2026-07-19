# Problem 43: Replace Words (Custom)

## 📋 Description
Replaces a target word in a string by splitting it into words first, with an option to match case or ignore it.

## 💡 Solution Overview
- `ReplaceWordInStringUsingSplit()` splits the sentence into a vector, replaces the matching word, then joins it back together
- Supports an optional `Match` flag for case-sensitive vs. case-insensitive comparison

## 🔑 Key Concepts
- Combining Split + Join (Problems 37 & 39) to build a higher-level operation
- Case-insensitive comparison via `LowerAllString()`

## 📥 Sample Output
```
Replace with Match case :
My Name is Ahmed Yaser

Replace with Dont Match case :
My Name is Ammar Yaser
```
