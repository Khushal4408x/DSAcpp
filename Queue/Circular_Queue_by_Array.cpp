#include <iostream>
#include <vector>
using namespace std;
class circular_queue
{public:
        int *arr;
        int currsize, cap;
        int f, r;
        circular_queue(int size)
        {   cap = size;
            arr = new int[cap];
            r = -1;f = 0;currsize = 0;
        }
    void push(int val)
    {   if (currsize==cap){
            cout << "Size full";
            return;
        }
        r = (r + 1) % cap;
        arr[r] = val;
        currsize++;
    }
    void pop()
    {   if(empty()){
           cout << "Circular queue is empty";
           return;
       }
       f = (f + 1) % cap;
      
       currsize--;
    }
    int front()
    {
        if (empty()){
            cout << "Circular queue is empty";
        }
        return arr[f];
    }
    bool empty(){
        return currsize == 0;
    }
    void printArr(){
        for (int i = 0; i < cap; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    circular_queue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);
    cq.pop();
    cq.printArr();
}