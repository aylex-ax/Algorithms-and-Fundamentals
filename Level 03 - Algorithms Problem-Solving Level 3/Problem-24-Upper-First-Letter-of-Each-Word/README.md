# Problem 24: Upper First Letter of Each Word

## 📋 Description
Reads a string and converts the first letter of every word to uppercase.

## 💡 Solution Overview
- `UpperFirstLetterOfEachWord()` reuses the word-boundary flag pattern from Problem 23 but calls `toupper()` on the first letter instead of printing it

## 🔑 Key Concepts
- `toupper()` / `islower()`
- Modifying a string in place while iterating

## 📥 Sample Output
```
Please enter yor string ? ahmed yaser
String After Conversion :
Ahmed Yaser
```
