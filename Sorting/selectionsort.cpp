#include <iostream>
#include <vector>
using namespace std;
void selectionsort(vector<int> &arr, int k)
{
    for (int i = 0; i < k - 1; i++)
    {
        int smallestindex = i;
        for (int j = i + 1; j < k; j++)
        {
            if (arr[j] < arr[smallestindex])
            {
                smallestindex = j;
            }
        }
        swap(arr[i], arr[smallestindex]);
    }
}
int main()
{
    vector<int> arr = {4, 5, 2, 1, -1, 44, 0};
    int n = arr.size();
    selectionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}