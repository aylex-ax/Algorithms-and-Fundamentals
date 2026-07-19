# Problem 46: Convert Line Data to Record

## 📋 Description
Takes a delimited line of text (as produced in Problem 45) and converts it back into an `sClient` struct.

## 💡 Solution Overview
- `ConvertLineToRecord()` splits the line by the separator using `SplitString()`, then assigns each token to the matching struct field

## 🔑 Key Concepts
- The inverse operation of Problem 45
- `stod()` to convert a stored string back into a `double`

## 📥 Sample Output
```
Account Number  : A150
Pin Code        : 1234
Name            : Ahmed Yaser
Phone           : 01014842264
Account Balance : 5270
```
