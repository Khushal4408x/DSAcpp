#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{ // in char data type we have to apply 2 pointer approach to revrse
    string str = "pyhton";
    reverse(str.begin(), str.end()); // iterators
    cout << str << endl;

    return 0;
}