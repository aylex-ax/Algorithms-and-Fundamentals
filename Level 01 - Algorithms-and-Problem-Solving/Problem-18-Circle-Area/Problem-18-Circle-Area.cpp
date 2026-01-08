#include <iostream>
#include <cmath>
using namespace std;

float ReadRadius()
{
    float R;
    cout << "Enter circle radius: ";
    cin >> R;
    return R;
}

float CircleArea(float R)
{
    const float PI = 3.141592654;
    return PI * pow(R, 2);
}

void PrintResult(float Area)
{
    cout << "\nCircle area = " << Area << endl;
}

int main()
{
    float radius = ReadRadius();
    float area = CircleArea(radius);
    PrintResult(area);
    return 0;
}
