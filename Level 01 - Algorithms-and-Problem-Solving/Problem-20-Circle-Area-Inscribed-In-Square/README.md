# Circle Area Inscribed In Square



## 🧠 Problem Description
This program calculates the area of a circle that is perfectly inscribed inside a square, given the length of the square's side.

The area is calculated using the formula:
$Area = \frac{\pi \times L^2}{4}$
*(Where $L$ is the side of the square, which is also the diameter of the circle)*.

## ⚙️ Solution Overview
- **ReadSquareSide()**: Prompts the user to input the side length of the square.
- **CircleAreaInscribedInSquare()**: Uses the side length as the diameter to calculate the circle's area using the constant $\pi$.
- **PrintResult()**: Outputs the calculated area to the user.

## 🛠️ Key Concepts
- Geometry Logic (Relationship between square side and circle diameter)
- Constants and Pi approximation
- Power function `pow()` from `<cmath>`
- Nested function calls in `main()`