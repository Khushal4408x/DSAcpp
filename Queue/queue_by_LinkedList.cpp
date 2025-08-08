#include <iostream>
using namespace std;
class Node
{
public:
    Node *next;
    int data;
    Node(int val_)
    {
        data = val_;
        next = NULL;
    }
};
class Queue
{
public:
    Node *head;
    Node *tail;
    Queue()
    {
        head = tail = NULL;
    }
    void push(int val)
    {
        Node *newNode = new Node(val);
        if (empty())
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop()
    {
        if (empty())
        {
            cout << "Queue is empty\n";
            return;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    int front()
    {
        if (empty())
        {
            cout << "queue is empty\n";
            return -1;
        }
        else
        {
            return head->data;
        }
    }
    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while (!q.empty())
    {
        cout << q.front() << " ";
    }
    cout << endl;
    return 0;
}