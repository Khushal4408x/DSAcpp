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
    int arr[] = {3, 4, 6};
    cout << arr << endl;
    return 0;
}