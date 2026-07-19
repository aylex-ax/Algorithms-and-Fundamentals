# Problem 48: Show All Clients

## 📋 Description
Reads all client records from `Clients.txt` and displays them in a formatted table.

## 💡 Solution Overview
- `LoadClientsDataFromFile()` reads the file line by line and converts each line into an `sClient` using `ConvertLineToRecord()`
- `PrintAllClientsData()` prints a header row, then loops through the vector printing each client aligned with `setw()`

## 🔑 Key Concepts
- Reading a whole file into a `vector<sClient>`
- Table formatting with `setw()` and `left`

## 📥 Sample Output
```
| Account Number | PIN Code  | Client Name  | Phone        | Balance
| A150           | 1234      | Ahmed Yaser  | 01014842264  | 5270
```
