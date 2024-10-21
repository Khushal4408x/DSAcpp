#include <iostream>
using namespace std;
int factorial(int x)
{
    int product = 1;
    for (int i = 1; i <= x; i++)
    {
        product = product * i;
    }
    return product;
}
int nCr(int n, int r)
{
    int nfac = factorial(n);
    int rfac = factorial(r);
    int nmrfac = factorial(n - r);
    int binomialcoeff = (nfac) / (rfac * nmrfac);
    return binomialcoeff;
}
int main()
{
    int A = nCr(4, 2);
    cout << A;
    return 0;
}