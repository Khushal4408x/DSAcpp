#include <iostream>
#include <vector>
#include <climits>
using namespace std;
bool valid(int &mid, int &k, vector<int> &arr)
{
    int sum = 0;
    int painter = 1;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (mid < arr[i])
        {
            return false;
        }
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else
        {
            painter++;
            sum = arr[i];
        }
    }
    if (painter <= k)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int minTime(vector<int> &arr, int k)
{
    int n = arr.size();
    int sum = 0;
    int maxlength = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        maxlength = max(maxlength, arr[i]);
    }
    int st = maxlength, end = sum, ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (valid(mid, k, arr))
        {
            end = mid - 1;
            ans = mid;
        }
        else
            st = mid + 1;
    }
    cout << ans;
    return ans;
}
int main()
{
    vector<int> arr = {10, 20, 30};
    int k = 4;
    // Expected Output: 30 (Extra painter unused)

    minTime(arr, k);

    return 0;
}