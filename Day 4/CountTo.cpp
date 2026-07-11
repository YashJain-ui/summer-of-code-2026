#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Enter number: ";
    cin >> num1;
    int i = num1;
    while (i != 0)
    {
        cout << i << endl;;
        i -= 1;
    }
}