# Problem 51: Update Client By Account Number

## 📋 Description
Finds a client by account number, confirms with the user, then reads new data and overwrites that client's record in `Clients.txt`.

## 💡 Solution Overview
- `ChangeClientRecord()` reads new field values from the user for the given account number
- `UpdateClientByAccountNumber()` finds the client, confirms, replaces it in the vector, then calls `SaveClientsDataToFile()` to persist the change

## 🔑 Key Concepts
- Find + confirm + replace + save pattern (same shape as Problem 50, but updating instead of deleting)
- Reusing the same file-saving function across CRUD problems

## ⚠️ Note
The confirmation prompt still says "Are you sure you want **delete** this Client?" — leftover wording copied from Problem 50 that should say "update" instead.

## 📥 Sample Output
```
Are you sure you want delete this Client ?  Y/N? y
Client Updated Successfully.
```
