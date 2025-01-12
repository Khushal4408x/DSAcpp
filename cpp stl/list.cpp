#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l1 = {2, 4, 5, 6, 7};
    for (int val : l1)
    {
        cout << val << " ";
    } // random acces not possible in list

    l1.push_front(56);
    l1.push_back(48);
    l1.pop_back();
    l1.pop_front();
}
