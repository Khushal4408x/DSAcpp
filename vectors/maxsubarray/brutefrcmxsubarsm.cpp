#include <iostream>
#include <climits>
using namespace std;
#include <vector>
int main()
{
    vector<int> vec = {1, 2, 0, -4, 3, 0};
    int n = vec.size();
    int maxsum = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        int sum = 0;
        for (int end = st; end < n; end++)
        {
            sum = sum + vec[end];
            maxsum = max(sum, maxsum);
        }
    }
    cout << "max sum is " << maxsum << endl;
    return 0;
}