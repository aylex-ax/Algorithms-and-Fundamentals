#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Please enter a number: ";
    cin >> Number;
    return Number;
}

float CalculateHalfNumber(int Number)
{
    return Number / 2.0f;
}

void PrintResult(int Number)
{
    float Half = CalculateHalfNumber(Number);
    cout << "\nHalf of " << Number << " is " << Half << endl;
}

int main()
{
    PrintResult(ReadNumber());
    return 0;
}
