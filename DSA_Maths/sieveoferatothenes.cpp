#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<bool> arr(n + 1, true);
    arr[0] = false;
    arr[1] = false;
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i])
        {
            count++;
            for (int j = i * 2; j <= n; j = j + i)
            {
                arr[j] = false;
            }
        }
    }
    cout << count;
}