# Project 8 — Ticket-Based Queue Line System

## Description
The final and largest project of Level 05: a real-world ticket queue system (the kind found in banks or service centers). `clsQueueLine` manages a `std::queue` of tickets, each represented by a private nested `clsTicket` class that captures the ticket's number, issue time, and expected wait based on how many clients were ahead of it. The system supports issuing tickets, serving clients, and displaying the line in two visual directions (RTL/LTR) as well as full ticket detail printouts. Each ticket's issue time is stamped using `clsDate::GetSystemDateTimeString()`, reusing the Level 04 date/time library.

## Features
- Issue numbered, prefixed tickets (`A01`, `A02`, ... / `B01`, `B02`, ...) with a live system timestamp
- Track total tickets, served clients, and waiting clients automatically
- Per-ticket expected serve time, computed from the average serve time and how many clients were ahead when the ticket was issued
- Serve the next client (dequeue) with success/failure reporting
- Look up who's next in line without dequeuing
- Print the line two ways: RTL (front-to-back, "who's being served next") and LTR (back-to-front, "who just joined")
- Print full detail cards for every ticket currently in the queue
- Multiple independent queue lines can run at once (the demo runs two: Pay Bills and Subscriptions), each with its own prefix and average serve time

## Project Structure

| File | Responsibility |
|---|---|
| `clsDate.h` | Level 04's date/time library, reused unchanged — only `clsDate::GetSystemDateTimeString()` is used here, to timestamp each ticket. |
| `clsQueueLine.h` | Core of the project — `clsQueueLine` (the queue manager) and its private nested `clsTicket` (a single ticket's data + formatted printout). |
| `main.cpp` | Driver program: creates two independent queue lines, issues tickets on each, prints info/lines/tickets, serves one client from each, and prints updated info. |

### `clsQueueLine` — key members
| Member | Responsibility |
|---|---|
| `IssueTicket()` | Increments the ticket counter and creates a new `clsTicket` (capturing how many clients are currently waiting), then enqueues it. |
| `WaitingClients()` | Returns the current queue size. |
| `WhoIsNext()` | Returns the full number of the front ticket, or a "No Clients Left" message if empty. |
| `ServeNextClient()` | Dequeues the front ticket; returns `false` if the queue was already empty. |
| `ServedClients()` | Total tickets issued minus clients still waiting. |
| `PrintInfo()` | Prints prefix, total tickets, served count, and waiting count. |
| `PrintTicketsLineRTL()` | Prints the line front-to-back (oldest/next-to-be-served first) with `<--` arrows, on a disposable copy of the queue. |
| `PrintTicketsLineLTR()` | Prints the line back-to-front (most recently issued first) with `-->` arrows, built by draining the copied queue into a temporary stack. |
| `PrintAllTickets()` | Prints a full detail card for every ticket currently waiting, using a disposable copy of the queue. |

### `clsQueueLine::clsTicket` (private nested class) — key members
| Member | Responsibility |
|---|---|
| Constructor | Stamps the ticket number, prefix, current system time, waiting-clients-ahead count, and average serve time. |
| `FullNumber()` | Prefix + number, e.g. `A03`. |
| `ExpectedServeTime()` | Average serve time × clients waiting ahead of this ticket. |
| `Print()` | Formatted detail card for the ticket. |

## Program Flow
1. Two independent queue lines are created: `PayBillsQueue` (prefix `A0`, 10-minute average serve time) and `SubscriptionsQueue` (prefix `B0`, 5-minute average serve time).
2. Five tickets are issued on `PayBillsQueue`; its info, both directional line views, and full ticket details are printed.
3. One client is served from `PayBillsQueue`; info is printed again to show the updated counts.
4. Three tickets are issued on `SubscriptionsQueue`, with the same sequence of info/line/detail printouts.
5. One client is served from `SubscriptionsQueue`; info is printed again.

## Sample Input/Output
Verified by compiling and running the delivered `clsQueueLine.h`/`main.cpp` (with `clsDate.h`'s single used method stubbed in for the test build only — see Known Issues). For `PayBillsQueue` after issuing 5 tickets:
```
Prefix   = A0
Total Tickets   = 5
Served Clients  = 0
Wating Clients  = 5

Tickets:  A01 <--  A02 <--  A03 <--  A04 <--  A05 <--
Tickets:  A05 -->  A04 -->  A03 -->  A02 -->  A01 -->
```
Ticket `A03`'s detail card correctly reports 2 waiting clients ahead and a 20-minute expected serve time (10-minute average × 2). After `ServeNextClient()`: `Served Clients = 1`, `Wating Clients = 4`.

## Concepts Practiced
- `std::queue` for FIFO ticket management
- Private nested classes for encapsulating a "record type" (`clsTicket`) that only makes sense inside its owner
- Using a temporary copy of a queue to iterate/print without mutating the original
- Using a temporary `std::stack` to reverse a queue's iteration order (LTR view)
- Reusing an existing library class (`clsDate`) across projects/levels
- Deriving statistics (served count, expected wait) from simple counters rather than storing them redundantly

## How to Run
1. Ensure `clsDate.h`, `clsQueueLine.h`, and `main.cpp` are in the same folder — **plus `clsString.h`**, which `clsDate.h` includes but which was not part of this delivery (see Known Issues).
2. **This code requires Microsoft Visual Studio / MSVC** (see Known Issues regarding `__declspec(property)`).
3. In Visual Studio: create a new empty C++ console project, add the files, build and run.

## What I Learned
- How to model a real-world queueing system (ticket counters) using `std::queue` plus a small amount of derived bookkeeping (waiting/served counts) instead of storing redundant state.
- How to use a private nested class to keep a supporting data type (`clsTicket`) scoped to the one class that uses it.
- How copying a queue/stack for display purposes avoids mutating the "real" data structure during a print operation.

## Known Issues
- **Missing dependency:** `clsDate.h` includes `"clsString.h"` (used by its `clsDate(string sDate)` constructor), but `clsString.h` was not included in this delivery. As delivered, the project **will not compile** until `clsString.h` is added back in from the Level 04 repo. This doesn't affect `clsQueueLine`'s own logic — the only `clsDate` method it actually calls, `GetSystemDateTimeString()`, doesn't touch `clsString` — but the include still has to resolve for the file to parse.
- **Compiler portability (carried over from Level 04/Project 7):** `clsDate.h` uses `__declspec(property(...))` for `Day`/`Month`/`Year`, an MSVC-only extension — confirmed by attempting to compile with g++, which rejects it. The project only builds in Visual Studio as delivered.
- No functional bugs found in `clsQueueLine.h`'s own logic (ticket numbering, waiting/served counts, expected serve time, RTL/LTR line printing, serve/dequeue) — verified correct by compiling and running the real `clsQueueLine.h` and `main.cpp` against a minimal stand-in for `clsDate` that only implements the one method actually used (`GetSystemDateTimeString`), to work around the two issues above for testing purposes only. The delivered files are untouched.
- `WaitingClients()` returns `int` from an underlying `size_t`/`.size()` call while other counters in the class are `short` — a minor type-consistency inconsistency, not a functional bug at the ticket volumes this class is meant for.

## Future Improvements
- Include `clsString.h` alongside `clsDate.h` in the repo so the project compiles out of the box.
- Replace `__declspec(property)` with a portable alternative if cross-platform builds are ever needed.
- Add a way to remove/cancel a specific ticket (not just serve the front of the line).
- Persist queue state (e.g. to a file) so ticket counters survive a restart.

## Built With
- C++ (`std::queue`, `std::stack`, nested classes)
- MSVC-specific `__declspec(property)` extension (via the reused `clsDate.h`)
