# Problem 20: Random Character Generator

## 📋 Description
A C++ program that generates a random character
based on a specified type: Capital, Small, Special, or Digit.
Example: GetRandomCharacter(CapitalLetter) → 'K'

## 💡 Solution Overview
- `enum enCharType` categorizes character types clearly
- `RandomNumber()` reused from Problem 19 for range generation
- `GetRandomCharacter()` maps each type to its ASCII range via switch

## 🔑 Key Concepts
- `enum` for character type categorization
- ASCII ranges:
  - Capital Letters: 65-90
  - Small Letters: 97-122
  - Special Characters: 33-47
  - Digits: 48-57
- `switch` statement
- Function reusability

## 🔄 Logic Diagram
[CharType?]
   ↓
[Capital]  → RandomNumber(65,90)  → char()
[Small]    → RandomNumber(97,122) → char()
[Special]  → RandomNumber(33,47)  → char()
[Digit]    → RandomNumber(48,57)  → char()

## 📥 Sample Output
Capital Letter  → K
Small Letter    → m
Special Char    → #
Digit           → 7