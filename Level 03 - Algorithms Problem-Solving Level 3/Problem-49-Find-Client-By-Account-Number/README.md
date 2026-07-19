# Problem 49: Find Client By Account Number

## 📋 Description
Searches `Clients.txt` for a client with a specific account number and prints their details if found.

## 💡 Solution Overview
- `FindClientByAccountNumber()` loads all clients from file, then loops through the vector comparing account numbers
- Returns `true`/`false` via the return value, and the found client via a reference parameter

## 🔑 Key Concepts
- Output parameters (`sClient& Client`)
- Linear search over file-loaded data

## 📥 Sample Output
```
Please Enter Account Number ? A150

The following are the Client Details :
AccountNumber  : A150
...
```
