#include <iostream>
using namespace std;

void ReadNumbers(int& Number1, int& Number2, int& Number3)
{
    cout << "Please enter the first number: ";
    cin >> Number1;

    cout << "Please enter the second number: ";
    cin >> Number2;

    cout << "Please enter the third number: ";
    cin >> Number3;
}

int SumOf3Numbers(int Number1, int Number2, int Number3)
{
    return Number1 + Number2 + Number3;
}

void PrintResult(int Total)
{
    cout << "\nThe total of the 3 numbers you entered is: " << Total << endl;
}

int main()
{
    int Number1, Number2, Number3;
    ReadNumbers(Number1, Number2, Number3);

    int Total = SumOf3Numbers(Number1, Number2, Number3);
    PrintResult(Total);

    return 0;
}
