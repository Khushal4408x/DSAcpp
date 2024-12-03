#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    cout << "size of vec:" << vec.size() << endl;
    cout << "capacity of vec:" << vec.capacity() << endl;
}