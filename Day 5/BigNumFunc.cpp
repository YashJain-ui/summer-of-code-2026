#include <iostream>
using namespace std;
int large(int x, int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int num1, num2;
    cout << "Enter number: ";
    cin >> num1;
    cout << "Enter number: ";
    cin >> num2;
    cout << large(num1,num2);
}