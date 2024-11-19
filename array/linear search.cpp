#include <iostream>
using namespace std;
int linsearch(int sz, int arr[], int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int target = 8;
    int sz = 7;
    int arr[] = {30, 29, 5, 6, 7, 8, 4};
    cout << "index of target= " << linsearch(sz, arr, target) << endl;
    return 0;
}