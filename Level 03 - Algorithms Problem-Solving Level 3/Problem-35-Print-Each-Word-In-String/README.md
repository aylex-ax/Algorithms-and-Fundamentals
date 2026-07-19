# Problem 35: Print Each Word In String

## 📋 Description
Reads a sentence and prints each word on its own line.

## 💡 Solution Overview
- `PrintEachWordInString()` repeatedly finds the space delimiter, extracts the substring before it, prints it, then erases that portion and repeats

## 🔑 Key Concepts
- `string::find()`, `string::substr()`, `string::erase()`
- Loop-until-no-delimiter-found pattern

## 📥 Sample Output
```
Please enter yor string ? Ahmed Yaser Metwalli
Your string Words are :

Ahmed
Yaser
Metwalli
```
