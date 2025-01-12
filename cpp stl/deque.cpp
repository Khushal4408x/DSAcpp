#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d = {1, 2, 3};
    cout << "first element of d" << d[0] << endl;
    for (int i = 0; i < d.size(); i++)
    {
        cout << "all the elements are " << d[i];
    }
}
