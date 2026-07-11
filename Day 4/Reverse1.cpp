#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Enter number: ";
    cin >> num1;
    int a;
    while (num1 != 0)
    {
        a = num1 % 10;
        cout << a;
        num1 = num1/10;
    }
}