#include <iostream>
using namespace std;

void ReadNumbers(float& Base, float& Height)
{
    cout << "Enter triangle base: ";
    cin >> Base;

    cout << "Enter triangle height: ";
    cin >> Height;
}

float TriangleArea(float Base, float Height)
{
    return (Base / 2.0f) * Height;
}

void PrintResult(float Area)
{
    cout << "\nTriangle Area = " << Area << endl;
}

int main()
{
    float Base, Height;
    ReadNumbers(Base, Height);
    PrintResult(TriangleArea(Base, Height));
    return 0;
}
