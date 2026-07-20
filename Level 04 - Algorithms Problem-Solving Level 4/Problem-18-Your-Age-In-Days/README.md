# Problem 18: Your Age In Days

## 📋 Description
Reads a birth date and calculates the person's current age in days by comparing it against today's system date.

## 💡 Solution Overview
- `GetSystemDate()` pulls the current date from `<ctime>` via `time()` and `localtime()`
- Reuses `GetDifferenceInDays()` from Problem 17 to count the days between birth date and today

## 🔑 Key Concepts
- Reading the system clock (`time_t`, `tm`, `localtime`)
- `#pragma warning (disable : 4996)` — suppresses an MSVC warning about `localtime` being considered "unsafe" on Windows

## 📥 Sample Output
```
Please Enter Your Date of Birth :

Your Age is : 9862 Day(s).
```
