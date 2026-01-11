# Circle Area Inscribed In Isosceles Triangle



## 🧠 Problem Description
This program calculates the area of a circle inscribed inside an isosceles triangle given the side length ($a$) and the base length ($b$).

The area is calculated using the formula:
$Area = \pi \times \frac{b^2}{4} \times \left( \frac{2a - b}{2a + b} \right)$

## ⚙️ Solution Overview
- **ReadTriangleData()**: Uses reference parameters to get both side ($A$) and base ($B$) from the user.
- **CircleAreaByITriangle()**: Implements the specific geometric formula for an inscribed circle in an isosceles triangle using the constant $\pi$.
- **PrintResult()**: Displays the final calculated area.

## 🛠️ Key Concepts
- Isosceles Triangle Properties
- Complex mathematical formulas in C++
- Pass by reference (`float &A, float &B`)
- Order of operations in programming