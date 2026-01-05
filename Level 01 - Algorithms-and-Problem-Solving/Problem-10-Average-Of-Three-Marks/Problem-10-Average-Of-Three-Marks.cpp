#include <iostream>
using namespace std;

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Please enter the first mark: ";
    cin >> Mark1;

    cout << "Please enter the second mark: ";
    cin >> Mark2;

    cout << "Please enter the third mark: ";
    cin >> Mark3;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float AverageOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return SumOf3Marks(Mark1, Mark2, Mark3) / 3.0f;
}

void PrintResult(float Average)
{
    cout << "\nThe average of the 3 marks you entered is: " << Average << endl;
}

int main()
{
    int Mark1, Mark2, Mark3;
    ReadMarks(Mark1, Mark2, Mark3);

    float Avg = AverageOf3Marks(Mark1, Mark2, Mark3);
    PrintResult(Avg);

    return 0;
}
