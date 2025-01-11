#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int n = nums.size();
    int i = n - 2;

    // Step 1: Find the first decreasing element (pivot)
    while (i >= 0 && nums[i] >= nums[i + 1])
    {
        i--;
    }

    if (i >= 0)
    { // If pivot is found
        // Step 2: Find the just larger element to swap
        int j = n - 1;
        while (nums[j] <= nums[i])
        {
            j--;
        }
        swap(nums[i], nums[j]); // Swap pivot and just larger element
    }

    // Step 3: Reverse the part after pivot
    reverse(nums.begin() + i + 1, nums.end());
}

int main()
{
    vector<int> nums = {1, 2, 5, 4, 3};

    nextPermutation(nums);

    cout << "Next Permutation: ";
    for (int i : nums)
    {
        cout << i << " ";
    }
    return 0;
}
