#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        for (int k = n - i; k > 0; k--)
        {
            cout << " ";
        }

        for (int j = 0; j < (2 * i + 1); j++)
        {
            if (j % 2 == 0)
            {
                cout << x;
                x++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}