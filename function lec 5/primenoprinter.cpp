#include <iostream>
using namespace std;
bool primechecker(int num)
{
    bool isprime = 1;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    return isprime;
}
int main()
{
    int n;
    cout << "Number of prime numbers to be printed:";

    cin >> n;
    int numb = 2;
    int count = 0;
    for (int numb = 2; count < n; numb++)
    {
        int funcvaluestore = primechecker(numb);
        if (funcvaluestore == 1)
        {
            cout << numb << endl;
            count++;
        }
    }
    return 0;
}