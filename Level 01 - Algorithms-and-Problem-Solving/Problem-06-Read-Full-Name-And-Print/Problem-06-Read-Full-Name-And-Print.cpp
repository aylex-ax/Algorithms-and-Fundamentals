#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter first name: ";
    cin >> Info.FirstName;

    cout << "Please enter last name: ";
    cin >> Info.LastName;

    return Info;
}

string GetFullName(stInfo Info)
{
    return Info.FirstName + " " + Info.LastName;
}

void PrintFullName(string FullName)
{
    cout << "\nYour full name is: " << FullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo()));
    return 0;
}
