#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    char a = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << a;
            a++;
                }
        cout << endl;
    }
    return 0;
}