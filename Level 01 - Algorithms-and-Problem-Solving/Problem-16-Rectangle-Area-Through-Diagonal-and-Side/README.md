# Rectangle Area Through Diagonal and Side

## 🧠 Problem Description
This program calculates the area of a rectangle given one of its sides and the length of its diagonal.  

The area is calculated using the formula:  
$Area = a \times \sqrt{d^2 - a^2}$  
*(Where $a$ is the side and $d$ is the diagonal)*.

## ⚙️ Solution Overview
- **ReadNumbers()**: Takes the side and diagonal length from the user.  
- **RectangleAreaBySideAndDiagonal()**: Implements the mathematical formula using the Pythagorean theorem to find the second side, then calculates the area.  
- **PrintResult()**: Displays the final calculated area.

## 🛠️ Key Concepts
- Pythagorean Theorem  
- Using `cmath` library (`sqrt`, `pow`)  
- Function-based design  
- Pass by reference for input functions