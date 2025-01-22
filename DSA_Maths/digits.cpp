#include <iostream>
using namespace std;
void digits(int n)
{
    int count = 0;
    while (n > 0)
    {
        int dig = n % 10;
        count++;
        n = n / 10;
    }
    cout << count;
}
int main()
{
    int n = 34215;
    digits(n);
}