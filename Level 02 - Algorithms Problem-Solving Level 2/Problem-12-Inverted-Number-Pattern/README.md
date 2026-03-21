# Problem 12: Inverted Number Pattern

## 📋 Description
A C++ program that prints an inverted number pattern.
Each row i prints the digit i exactly i times, counting down.
Example for N=4:
```
4444
333
22
1
```

## 💡 Solution Overview
- `ReadPositiveNumber()` validates input — only accepts positive numbers
- `PrintInvertedNumberPattern()` uses nested loops
- Outer loop counts DOWN from N to 1
- Inner loop prints digit i exactly i times

## 🔑 Key Concepts
- Nested `for` loops
- Descending loop pattern
- Number pattern printing

## 🔄 Logic Diagram
[Read N]
   ↓
[For i = N down to 1]
   ↓
   [For j = i down to 1]
      → [Print i]
   ↓
[New Line]

## 📥 Sample Input / Output
Please enter positive number? → 4

4444
333
22
1