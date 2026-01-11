#include <iostream>
#include <cmath>

using namespace std;

double readCircumference() {
    double circumference;
    cout << "Please enter circle Circumference: ";
    cin >> circumference;
    return circumference;
}

double calculateCircleArea(double circumference) {
    const double PI = 3.141592653589793;
    return pow(circumference, 2) / (4 * PI);
}

void printResult(double area) {
    cout << "\nThe circle Area is : " << area << endl;
}

int main() {
    printResult(calculateCircleArea(readCircumference()));
    return 0;
}