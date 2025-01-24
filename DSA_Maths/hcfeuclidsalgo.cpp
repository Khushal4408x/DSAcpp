#include <iostream>
using namespace std;
int main()
{
    int a = 20;
    int b = 24;
    if (a == 0)
    {
        cout << "Hcf is " << b;
    }
    else if (b == 0)
        cout << "Hcf is " << a;
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        cout << "Hcf is " << b << endl;
    }
    else
        cout << "hcf is " << a << endl;
}