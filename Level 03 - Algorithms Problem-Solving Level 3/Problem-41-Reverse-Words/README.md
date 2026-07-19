# Problem 41: Reverse Words

## 📋 Description
Reads a sentence and reverses the order of its words (not the letters within each word).

## 💡 Solution Overview
- `ReverseWordsInString()` splits the string into a vector, then walks it backwards from `end()` to `begin()` using an iterator, rebuilding the string in reverse order

## 🔑 Key Concepts
- Vector iterators (`vector<string>::iterator`)
- Reverse traversal
- Combining Split + manual join

## 📥 Sample Output
```
Please enter yor string ? Ahmed Yaser Metwalli
String after Reversing words :
Metwalli Yaser Ahmed
```
