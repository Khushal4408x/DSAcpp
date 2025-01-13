#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(3);
    s.push(5);
    s.push(7);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    s.push(1);
    s.push(3);
    s.push(5);
    s.push(7);
    stack<int> s2;
    s2.swap(s);
    while (!s2.empty())
    {
        cout << s2.top();
        s2.pop();
    }
    cout << endl
         << s2.size() << " size of s2 after poping";
}