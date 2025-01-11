#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void lexological(vector<int> &arr)
{
    int n = arr.size();
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1])
    {
        i--;
    }
    if (i >= 0)
    {
        // pviot found
        int j = n - 1;
        while (arr[j] <= arr[i])
        {
            j--;
        }
        swap(arr[i], arr[j]);
    }

    int x = i + 1;
    int y = n - 1;
    while (x < y)
    {
        swap(arr[x], arr[y]);
        x++;
        y--;
    }
}
int main()
{
    vector<int> arr = {1, 2, 3};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}