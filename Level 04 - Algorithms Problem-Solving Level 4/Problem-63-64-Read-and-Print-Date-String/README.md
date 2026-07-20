# Problems 63-64: Read & Print Date String

## 📋 Description
Reads a date as a single "dd/mm/yyyy" text string from the user, parses it into a structured date, then converts it back into a string to confirm it was read correctly.

## 💡 Solution Overview
- `ReadDateString()` reads the whole line as one string (e.g. `"20/7/2026"`)
- `SplitString()` breaks it apart on the `/` delimiter into a vector of 3 tokens
- `StringToDate()` converts those tokens into a `stDate` using `stoi()`
- `DateToString()` does the reverse — rebuilding a `"d/m/y"` string from a struct

## 🔑 Key Concepts
- String parsing without a dedicated date library
- Round-tripping data between string and struct representations
- `stoi()` for string-to-integer conversion

## 📥 Sample Output
```
Please Enter Date dd/mm/yyyy ? 20/7/2026

Day   : 20
Month : 7
Year  : 2026

You Entered : 20/7/2026
```
