#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the num:";
    cin >> num;
    int digsum = 0;

    while (num > 0)
    {
        int lastdig = num % 10;
        // num = num / 10; OR
        num /= 10;
        digsum = digsum + lastdig;
    }
    cout << "the sum of digits:" << digsum;
    return 0;
}