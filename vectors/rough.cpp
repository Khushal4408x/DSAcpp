#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        { // starting star
            cout << "*";
        }
        for (int k = 0; k < 2 * (n - 1 - i); k++)
        { // spaces
            cout << " ";
        }
        for (int l = 0; l < i + 1; l++)
        { // ending star
            cout << "*";
        }
        cout << endl;
    } // upper part complete
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        { // starting stars of below part
            cout << "*";
        }
        for (int k = 0; k < 2 * i; k++)
        { // spaces of below middle part
            cout << " ";
        }
        for (int l = 0; l < n - i; l++)
        { // ending stars
            cout << "*";
        }
        cout << endl;
    }
}
