#include <iostream>
using namespace std;
int binaryconverter(int decinum)
{
    int finalbinary = 0;

    int power = 1; // ie 10 to power zero
    while (decinum > 0)
    {
        int rem = decinum % 2;
        decinum = decinum / 2;
        finalbinary = finalbinary + (rem * power);
        power = power * 10;
    }

    return finalbinary;
}
int main()
{
    int input;
    cout << "enter the number till you need binary conversion";
    cin >> input;
    for (int i = 1; i <= input; i++)
    {
        int binary = binaryconverter(i);
        cout << binary << endl;
    }
}