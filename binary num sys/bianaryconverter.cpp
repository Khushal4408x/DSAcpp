// Decimal to bianry converter
#include <iostream>
using namespace std;
int main()
{
    int finalbinary = 0;
    int decinum;
    cout << "enter the number" << endl;
    cin >> decinum;
    int power = 1; // ie 10 to power zero
    while (decinum > 0)
    {
        int rem = decinum % 2;
        decinum = decinum / 2;
        finalbinary = finalbinary + (rem * power);
        power = power * 10;
    }
    cout << "The binary code is" << finalbinary << endl;
    return 0;
}