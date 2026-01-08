#include <iostream>
#include <cmath>
using namespace std;

float ReadDiameter()
{
    float D;
    cout << "Enter circle diameter: ";
    cin >> D;
    return D;
}

float CircleAreaByDiameter(float D)
{
    const float PI = 3.141592654;
    return (PI * pow(D, 2)) / 4.0f;
}

void PrintResult(float Area)
{
    cout << "\nCircle area = " << Area << endl;
}

int main()
{
    float diameter = ReadDiameter();
    float area = CircleAreaByDiameter(diameter);
    PrintResult(area);
    return 0;
}
