#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *ptr = &a;
    cout << ptr << endl;
    cout << "increment op  " << ptr << endl; //+4;
    cout << "original  " << ++ptr << endl
         << "a-1" << --a << endl;
    cout << "add 1  " << ptr + 1 << endl; //+4*1
    cout << "add 4  " << ptr + 4 << endl; //+4*4
    int *ptr1;
    int *ptr2 = ptr1 + 2;

    cout << " after sub  " << ptr2 - ptr1 << endl;
    // compare op
    int *ptr3;
    int *ptr4;
    cout << "ptr3 " << ptr3 << endl;
    cout << "ptr4 " << ptr4 << endl;
    cout << "comparision =" << (ptr3 < ptr4) << endl;
}