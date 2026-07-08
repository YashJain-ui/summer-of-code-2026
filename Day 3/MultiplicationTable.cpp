#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter number: ";
    cin >> num1;
    cout << "Enter number to multiply til: ";
    cin >> num2;
    for(int i = 0; i <= num2; i++)
    {
        cout << num1 << "x" << i << "=" << num1*i << endl;
    }

    return 0;
}