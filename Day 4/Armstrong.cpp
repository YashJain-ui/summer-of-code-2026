#include <iostream>
using namespace std;
int main()
{
    int num1, b;
    cout << "Enter number: ";
    cin >> num1;
    int c=num1;
    int a;
    int sum = 0;
    while (c != 0)
    {
        a = c % 10;
        b = a*a*a;
        sum += b;
        c = c/10;
    }
    if (sum == num1)
    {
        cout << "It is an armstrong number";
    }
    else
    {
        cout << "It is not an armstrong number";
    }
}