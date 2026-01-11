# Circle Area Described Around Arbitrary Triangle



## 🧠 Problem Description
This program calculates the area of a circle circumscribed around an arbitrary triangle, given the lengths of its three sides ($a, b, c$).

The solution involves:
1. Calculating the semi-perimeter $p = \frac{a+b+c}{2}$.
2. Finding the circumradius $R = \frac{abc}{4\sqrt{p(p-a)(p-b)(p-c)}}$.
3. Calculating the area using $Area = \pi R^2$.

## ⚙️ Solution Overview
- **ReadTriangleData()**: Collects the three side lengths from the user via reference parameters.
- **CircleAreaByATriangle()**: Implements Heron's formula to find the triangle's area and then derives the circle's area.
- **PrintResult()**: Displays the final result with precision.

## 🛠️ Key Concepts
- Heron's Formula
- Circumscribed Circle Properties
- Advanced Math with `cmath`
- Multiple reference parameters in functions