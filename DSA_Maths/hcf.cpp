#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a = 20;
    int b = 24;
    if (a == 0)
    {
        cout << "gcd is " << b;
    }
    else if (b == 0)
    {
        cout << "gcd is " << a;
    }
    int gcd = 1;
    for (int i = 2; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    cout << gcd;
}