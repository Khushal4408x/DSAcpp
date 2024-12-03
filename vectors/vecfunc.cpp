#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 3, 5, 7};
    cout << "size:" << vec.size() << endl;
    vec.push_back(23);
    vec.push_back(883);
    vec.push_back(45);
    cout << "size after pushback " << endl;
    vec.pop_back();
    cout << "last value after pop_back:" << vec.back() << endl;
    cout << "first value in vector:" << vec.front() << endl;
    cout << "value at index 4:" << vec.at(4);
    return 0;
}