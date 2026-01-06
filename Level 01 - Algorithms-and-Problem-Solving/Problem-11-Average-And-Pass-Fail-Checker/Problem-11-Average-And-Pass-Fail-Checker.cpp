#include<iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
	cout <<"Please enter First Mark? ";
	cin >> Mark1;
	cout << "\nPlease enter second Mark? ";
	cin >> Mark2;
	cout << "\nPlease enter third Mark? ";
	cin >> Mark3;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float AverageOf3Marks(int Mark1, int Mark2, int Mark3)
{
	return (float)SumOf3Marks( Mark1,  Mark2,  Mark3) / 3;
}

enPassFail CheckAverage(float Average)
{
	if (Average >= 50)
	{
		return enPassFail::Pass;
	}
	else
	{
		return enPassFail::Fail;
	}
}

void PrintResult(float Average)
{
 cout << "The average of 3 marks you entered >>( "<< Average <<" )<<" << endl;

 if (CheckAverage( Average) == enPassFail::Pass)
 {
    cout << "\nYou: passed\n";
 }
 else
 {
	 cout << "\nYou: failed\n";
 }
}

int main()
{
	int Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintResult(AverageOf3Marks(Mark1, Mark2, Mark3));
	return 0;
}