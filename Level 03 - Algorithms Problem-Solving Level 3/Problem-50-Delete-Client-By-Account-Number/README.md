# Problem 50: Delete Client By Account Number

## 📋 Description
Finds a client by account number, confirms with the user, and deletes that client from `Clients.txt`.

## 💡 Solution Overview
- `MarkClientForDeleteByAccountNumber()` sets a `MarkForDelete` flag on the matching client instead of removing it from the vector directly
- `SaveClientsDataToFile()` rewrites the file, skipping any client marked for deletion
- The vector is reloaded from disk afterward to reflect the change

## 🔑 Key Concepts
- Soft-delete pattern (flag first, filter on save)
- Rewriting a whole file (`ios::out`) instead of editing it in place

## 📥 Sample Output
```
Are you sure you want delete this Client ?  Y/N? y
Client Deleted Successfully.
```
