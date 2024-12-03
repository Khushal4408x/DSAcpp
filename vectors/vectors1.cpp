#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2(5, 2);
    vector<char> vec3(4, 'alpha');
    for (char val : vec3)
    {
        cout << val << endl;
    }
}