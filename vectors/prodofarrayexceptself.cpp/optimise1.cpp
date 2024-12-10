#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> prefix = {nums[0]};
    int prod = 1;
    for (int i = 1; i <= n; i++)
    {
        prod = prod * i;
    }
}