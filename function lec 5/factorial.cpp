#include <iostream>
using namespace std;
int factorial(int a)
{
    int product = 1;
    for (int i = 1; i <= a; i++)
    {
        product = product * i;
    }
    return product;
}
int main()
{
    int Factorial = factorial(4);
    cout << Factorial;
    return 0;
}