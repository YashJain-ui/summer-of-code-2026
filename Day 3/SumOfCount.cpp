#include <iostream>
using namespace std;
int main()
{
    int num1, sum;
    cout << "Enter number: ";
    cin >> num1;
    sum = 0;
    for(int i = 0; i<=num1; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of " << num1 << "numbers is " << sum;
}