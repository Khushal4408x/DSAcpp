#include <iostream>
#include <vector>
using namespace std;
void sort012(vector<int> &arr, int n)
{
    int lo = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[lo]);
            mid++;
            lo++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
            mid++;
        }
    }
}
int main()
{
    vector<int> arr = {2, 0, 1, 0, 1};
    int n = arr.size();
    sort012(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}