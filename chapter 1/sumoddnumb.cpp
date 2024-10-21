#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number till which sum of odd numbers required  ";
    cin >> n;
    int i = 0;
    int sum = 0;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        i = i + 1;
    }
    cout << sum << endl;
    return 0;
}
