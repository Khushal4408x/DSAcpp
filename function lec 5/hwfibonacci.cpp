// fibonacci series program
#include <iostream>
using namespace std;
int main()
{
    int finalnum = 5;
    int num = 0;
    int num1 = 1;
    int num2 = 1;

    for (int i = 0; i <= finalnum; i++)
    {

        num2 = num1 + num;
        num = num1;
        num1 = num2;
        cout << num1 << endl;
    }
    return 0;
}