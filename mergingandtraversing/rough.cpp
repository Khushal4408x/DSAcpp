#include <iostream>
#include <vector>
using namespace std;
void nextpermut(vector<int> &arr)
{
    int n = arr.size();
    int i = n - 2;
    while (arr[i] > arr[i + 1])
    {
        i--;
    }
    if (i >= 0)
    {
        // pviot found
        int j = n - 1;
        while (arr[i] <= arr[j])
        {
            j--;
        }
    }
    int x = i + 1;

    int y = n - 1;

    while (x <= y)
    {
        swap(arr[x], arr[y]);
        x++;
        y--;
    }
}
int main()
{
    vector<int> arr = {3, 4, 0, 91, 0};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}