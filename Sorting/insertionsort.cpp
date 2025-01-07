#include <iostream>
#include <vector>
using namespace std;
void insertionsort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (curr < arr[prev] && prev >= 0)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}
int main()
{
    vector<int> arr = {9, 5, 3, 7, 0};
    int n = arr.size();
    insertionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}