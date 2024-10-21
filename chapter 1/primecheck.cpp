#include <iostream>
using namespace std;
int main()
{ // prime number checker
    int n;
    bool isprime = true;
    cout << "enter a number \n";
    cin >> n;
    for (int i = 2; i <= n - 1; i++)
    {

        if (n % i == 0)
        {
            isprime = false;
            break;
        }
    }
    if (!isprime)
    {
        cout << "Not a prime";
    }
    else
        cout << "Number is prime";

    return 0;
}