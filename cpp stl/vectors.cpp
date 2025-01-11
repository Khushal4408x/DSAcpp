#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vec.insert(vec.begin() + 1, 400);
    /*for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i];
    }
    cout << "Printing arr with memory location";*/
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it);
    }
}