#include <iostream>
using namespace std;
int main()
{
    char c[5] = {'N', 'I', 'E', 'T', '\0'};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << c[i];
        }
        cout << endl;
    }
}