#include <iostream>
using namespace std;
int prime(int x)
{
    if (x <= 1)
        return 1;

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 1;
    }

    return 0;
}
int main()
{
    int num1;
    cout << "Enter number: ";
    cin >> num1;
    if (prime(num1) == 1)
    {
        cout << "Not Prime";
    }
    else
    {
        cout << "Prime";
    }
}