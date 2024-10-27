#include <iostream>
using namespace std;
int main()
{
    int num = 8;
    bool isprime = 1;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 1)
    {
        cout << "the number is prime";
    }
    else
        cout << "the number is composite";
    return 0;
}