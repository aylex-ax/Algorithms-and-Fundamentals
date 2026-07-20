# Level 04 =----> (08)-Algorithms Problem-Solving Level 4

Part of a structured C++ learning roadmap ([ProgrammingAdvices.com](https://programmingadvices.com)). This level is built almost entirely around **date and calendar logic** — starting from leap-year checks and building up, function by function, into a small reusable date/period utility library (comparison, arithmetic, validation, formatting, and overlap detection).

## 📂 Structure

Each problem lives in its own folder containing:
- A `.cpp` source file with the full solution
- A `README.md` explaining the problem, approach, and key concepts used

Several groups of problems (20-32, 33-46, 47-53, 63-64) are combined into a single program each, matching how the original problem set presented them — later problems in each group build directly on functions introduced earlier in the same file.

```
Level 04 - Algorithms Problem-Solving Level 4/
├── Problem-01-Number-to-Text/
├── Problem-02-Is-Leap-Year/
├── ...
└── Problem-65-Format-Date/
```

## 📑 Problem Index

| # | Problem | Topic |
|---|---------|-------|
| 01 | Number to Text | Recursion |
| 02 | Is Leap Year | Conditionals |
| 03 | Is Leap Year (One Line of Code) | Conditionals |
| 04 | Days-Hours-Minutes-Seconds In a Year | Function Composition |
| 05 | Days-Hours-Minutes-Seconds In a Month | Function Composition |
| 06 | Number of Days In a Month (Short Logic) | Arrays |
| 07 | Day Name | Date Formulas |
| 08 | Month Calendar | Date Formulas & Formatting |
| 09 | Year Calendar | Date Formulas & Formatting |
| 10 | Days from the Beginning of Year | Date Arithmetic |
| 11 | Date from Day Order In a Year | Date Arithmetic |
| 12 | Add Days To Date | Date Arithmetic |
| 13 | Date1 Less Than Date2 | Date Comparison |
| 14 | Date1 Equals to Date2 | Date Comparison |
| 15 | Last Day, Last Month | Date Helpers |
| 16 | Increase Date By One Day | Date Arithmetic |
| 17 | Difference In Days | Date Arithmetic |
| 18 | Your Age In Days | System Clock |
| 19 | Difference In Days (Negative Days) | Date Arithmetic |
| 20-32 | Increase Date Problems (day → millennium) | Date Arithmetic |
| 33-46 | Decrease Date Problems (day → millennium) | Date Arithmetic |
| 47-53 | More Date Problems (weekday/business-day checks) | Date Utilities |
| 54 | Calculate Vacation Days | Date Utilities |
| 55 | Calculate Vacation Return Date | Date Utilities |
| 56 | Is Date1 After Date2 | Date Comparison |
| 57 | Compare Date Function | Enums & Comparison |
| 58 | Is OverLap Periods | Structs & Periods |
| 59 | Period Length In Days | Structs & Periods |
| 60 | Is Date Within Period | Structs & Periods |
| 61 | Count Overlap Days | Structs & Periods |
| 62 | Validate Date | Validation |
| 63-64 | Read & Print Date String | String Parsing |
| 65 | Format Date | String Templating |

## 🔑 Key Concepts Covered

- Leap-year and days-in-month logic as the foundation for everything else in the level
- Zeller's Congruence–style formula for computing day-of-week without loops
- Struct-based date modeling (`sDate` / `stDate`), later extended into `stPeriod` for date ranges
- Layered date arithmetic — building "add a day" first, then weeks, months, years, decades, and centuries on top of it
- Three-way comparison via enums (`Before` / `Equal` / `After`)
- Reading/writing dates as formatted strings, including a custom placeholder-based formatter
- Reading the real system clock (`<ctime>`) for "today" and age calculations

## 🛠️ Requirements

- Any standard C++ compiler (g++, MSVC, Clang) supporting C++11 or later
- No external libraries required

## ▶️ How to Run

```bash
g++ ProblemFile.cpp -o Problem
./Problem
```

## 📌 Notes

This level is the most cohesive one yet — nearly every problem either introduces a new date primitive or combines earlier ones into something more useful, ending in a small hand-built date/period library (validation, arithmetic, comparison, overlap detection, and formatting) built entirely from first principles rather than `<chrono>` or any date library.
