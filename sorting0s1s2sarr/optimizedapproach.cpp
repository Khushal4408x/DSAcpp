#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &arr, int n)
{
    int num0 = 0;
    int num1 = 0;
    int num2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            num0 += 1;
        }
        else if (arr[i] == 1)
        {
            num1 += 1;
        }
        else
            num2 += 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (i < num0)
        {
            arr[i] = 0;
        }
        else if (i < (num0 + num1))
        {
            arr[i] = 1;
        }
        else if (i < (num0 + num1 + num2))
        {
            arr[i] = 2;
        }
    }
}
int main()
{
    vector<int> arr = {0, 1, 2, 0, 0, 2, 2, 0, 2, 1};
    int n = arr.size();
    sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}