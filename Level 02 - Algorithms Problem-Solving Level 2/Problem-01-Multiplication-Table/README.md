# Problem 01: Multiplication Table (1 to 10)

## 📋 Description
A C++ program that prints a fully formatted multiplication table
from 1 to 10 with aligned columns and a styled header.

## 💡 Solution Overview
- `PrintTableHeader()` prints the column numbers and separator line
- `ColumnSeparator()` handles alignment based on digit count
- `PrintMultiplicationTable()` loops through rows and columns

## 🔑 Key Concepts
- Nested `for` loops
- Functions & Separation of Concerns
- Console formatting with `\t`

## 🔄 Logic Diagram
[Start]
   ↓
[Print Header Row: 1..10]
[Print Separator Line: 83 dashes]
   ↓
[For each row i = 1..10]
   → [Print i | i×1  i×2 ... i×10]
   ↓
[End]

## 📤 Sample Output
		Multiplication Table From 1 to 10

	1	2	3	4	5	6	7	8	9	10
___________________...
 1   |  1	2	3	4	5	6	7	8	9	10
 2   |  2	4	6	8	10	12	14	16	18	20
...