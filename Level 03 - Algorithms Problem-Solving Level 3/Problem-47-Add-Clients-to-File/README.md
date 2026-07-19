# Problem 47: Add Clients to File

## 📋 Description
Reads client data from the user and appends it as a new line in `Clients.txt`, repeating until the user chooses to stop.

## 💡 Solution Overview
- `AddClientToFile()` opens the file in append mode (`ios::app`) and writes one line
- `AddClients()` loops, calling `AddNewClient()` repeatedly while the user answers 'Y'

## 🔑 Key Concepts
- File I/O (`fstream`, `ios::out | ios::app`)
- `do-while` loop for "add more?" prompts

## ⚠️ Note
`#include<ccType>` should be `#include<cctype>` (lowercase, correct spelling). On Windows this can compile because the filesystem is case-insensitive, but it will fail to find the header on Linux/macOS, which use case-sensitive filesystems.

## 📥 Sample Output
```
Client Added Successfully, do you want to add more Clients?  Y/N?
```
