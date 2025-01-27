#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char c[100];
    char p[100];
    cin >> c;
    int clen = 0;
    for (int i = 0; i != '\n'; i++)
    {
        clen++;
    }
    for (int i = 1; i < clen; i++)
    {
        p[i] = c[clen - 1 - i];
    }
    for (int i = 0; i < clen; i++)
    {
        cout << p[i];
    }
    bool valp = true;
    for (int i = 0; i < clen; i++)
    {
        if (c[i] != p[i])
        {
            valp = false;
            break;
        }
    }
    if (valp == true)
    {
        cout << endl
             << "Valid Palindrome";
    }
}