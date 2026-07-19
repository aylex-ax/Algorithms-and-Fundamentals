# Problem 45: Convert Record to Line

## 📋 Description
Reads a client's data (account number, PIN, name, phone, balance) and converts it into a single delimited line of text, ready to be saved to a file.

## 💡 Solution Overview
- `sClient` struct groups all client fields together
- `ConvertRecordToLine()` concatenates each field with a separator (`#//#`)

## 🔑 Key Concepts
- Structs (`struct sClient`)
- Preparing structured data for flat-file storage

## 📥 Sample Output
```
Client Record for Saving is :
A150#//#1234#//#Ahmed Yaser#//#01014842264#//#5270.000000
```
