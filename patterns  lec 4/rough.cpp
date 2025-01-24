#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < (n / 2) + 1; i++)
    {
        for (int k = (n / 2); k >= i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}