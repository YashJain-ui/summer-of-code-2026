#include <iostream>
using namespace std;
int square(int x)
{
    return x*x;
}
int main()
{
    int num1, a;
    cout << "Enter number: ";
    cin >> num1;
    cout << square(num1);
}