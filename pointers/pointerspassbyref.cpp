#include <iostream>
using namespace std;
int chageA(int *ptr)
{
    *ptr = 20;
}
int changea(int &b)
{
    b = 24;
}
int main()
{
    int a = 5;
    int c = 6;
    chageA(&a);
    changea(c);
    cout << a << endl
         << c << endl;

    /* int *ptr = &a;
     int **parptr = &ptr;
     cout << ptr << endl
          << parptr << endl
          << *ptr << endl
          << *parptr << endl;*/
}
