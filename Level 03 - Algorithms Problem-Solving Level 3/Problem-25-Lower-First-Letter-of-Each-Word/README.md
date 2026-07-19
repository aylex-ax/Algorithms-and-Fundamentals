# Problem 25: Lower First Letter of Each Word

## 📋 Description
Reads a string and converts the first letter of every word to lowercase — the mirror image of Problem 24.

## 💡 Solution Overview
- `LowerFirstLetterOfEachWord()` uses the same word-boundary flag pattern, calling `tolower()` on the first letter of each word

## 🔑 Key Concepts
- `tolower()` / `isupper()`
- Reusing a scanning pattern for the opposite transformation

## 📥 Sample Output
```
Please enter yor string ? Ahmed Yaser
String After Conversion :
ahmed yaser
```
