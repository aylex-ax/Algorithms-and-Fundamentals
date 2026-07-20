# Problem 65: Format Date

## 📋 Description
Reads a date string and reprints it in several different custom formats (dd/mm/yyyy, mm-dd-yyyy, a full sentence, etc.), based on a user-supplied format template.

## 💡 Solution Overview
- `FormatDate()` takes a date and a template string (default `"dd/mm/yyyy"`), then uses `ReplaceWordsInString()` to substitute the `dd`, `mm`, and `yyyy` placeholders with the actual day, month, and year values

## 🔑 Key Concepts
- Template-based string formatting (placeholder substitution)
- Default parameter values for a sensible out-of-the-box format
- Reusing a generic find-and-replace utility to build a flexible formatter

## 📥 Sample Output
```
Please Enter Date dd/mm/yyyy ? 20/7/2026

20/7/2026

7/20/2026

2026/20/7

20-7-2026

7-20-2026

Day:20, Month:7, Year:2026
```
