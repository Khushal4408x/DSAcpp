#include <iostream>
using namespace std;
int minimumoftwonum(int a, int b)
{
    if (a < b)
    {
        return a;
    }

    else
        return b;
}
int main()
{
    int result = minimumoftwonum(4, 5);
    cout << result;
    return 0;
}