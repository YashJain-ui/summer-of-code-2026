#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter starting number: ";
    cin >> num1;
    cout << "Enter ending number: ";
    cin >> num2;
    for(int i = num1; i <= num2; i++)
    {
        cout << i << endl;
    }
}