# Job Application Eligibility Check with Recommendation

## 🧠 Problem Description
This C++ program reads the applicant's age, driving license status, and recommendation status, then determines whether the applicant is **accepted (Hired)** or **rejected** based on predefined criteria.

## ⚙️ Solution Approach
- The program uses a `struct` to store applicant information (`Age`, `HasDrivingLicense`, `HasRecommendation`).
- **ReadInfo()**: Reads the user's age, driving license, and recommendation status.
- **IsAccepted()**: Checks if the applicant has a recommendation, or if the applicant is older than 21 and has a driving license.
- **PrintResult()**: Prints "Hired" if the applicant meets the criteria, otherwise "Rejected".

## 🧪 Example