# Problem 42: Replace Words

## 📋 Description
Replaces every occurrence of a target word in a string with a new word, using the built-in `string::replace()`.

## 💡 Solution Overview
- `ReplaceWordsInStringWithBuiltInFunction()` repeatedly finds the target substring and replaces it until no more matches remain

## 🔑 Key Concepts
- `string::find()` + `string::replace()`
- Loop-until-not-found pattern

## ⚠️ Note
`main()` calls a function named `ReplaceWordsInString`, but the function defined above it is named `ReplaceWordsInStringWithBuiltInFunction`. The names don't match, so this file won't compile as-is — the call in `main()` needs to use the same name as the function definition.

## 📥 Sample Output (once names match)
```
String after Replace :
My Name is Ammar Yaser
```
