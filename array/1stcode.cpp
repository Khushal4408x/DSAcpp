#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {70, 80, 99, 88};

    cout << "size of array of 5 index " << sizeof marks << " bytes" << endl;
    cout << "size of each index " << (sizeof marks) / sizeof(int) << "bytes" << endl;
    return 0;
}