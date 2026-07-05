#include <iostream>
using namespace std;

int main()
{
    int num1;
    cout << "Enter Grade: ";
    cin >> num1;
    if(num1>90)
    {
        cout << "Grade is A";
    }
    else if(num1>=80)
    {
        cout << "Grade is B";
    }
    else if(num1>=70)
    {
        cout << "Grade is C";
    }
    else
    {
        cout << "Grade is D";
    }
    return 0;
}