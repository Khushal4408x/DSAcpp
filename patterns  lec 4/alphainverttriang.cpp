#include <iostream>
using namespace std;
int main()
{
    int count = 4;
    char a = 'A';
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i; j++)
        {
            /* code */ cout << ' ';
        }
        for (int j = 0; j < count - i; j++)
        {
            cout << a;
            a++;
        }

        cout << endl;
    }
}