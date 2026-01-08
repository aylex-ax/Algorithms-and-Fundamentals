#include <iostream>
#include <cmath>
using namespace std;

void ReadNumbers(float& Side, float& Diagonal)
{
    cout << "Enter rectangle side: ";
    cin >> Side;

    cout << "Enter rectangle diagonal: ";
    cin >> Diagonal;
}

float RectangleAreaBySideAndDiagonal(float Side, float Diagonal)
{
    float OtherSide = sqrt(pow(Diagonal, 2) - pow(Side, 2));
    return Side * OtherSide;
}

void PrintResult(float Area)
{
    cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
    float Side, Diagonal;
    ReadNumbers(Side, Diagonal);
    PrintResult(RectangleAreaBySideAndDiagonal(Side, Diagonal));
    return 0;
}
