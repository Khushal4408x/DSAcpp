#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while (!q.empty())
    {
        cout << q.front();
        q.pop();
    }
    cout << endl;
    priority_queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(4);
    q1.push(3);
    while (!q1.empty())
    {
        cout << q1.top();
        q1.pop();
    }
}