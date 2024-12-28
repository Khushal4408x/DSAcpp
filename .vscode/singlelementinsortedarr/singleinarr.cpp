#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size(), st = 0, end = n - 1;
        
        if (n == 1) return nums[0];  // Special case: Only one element
        
        while (st <= end) {
            int mid = st + (end - st) / 2;

            // Check if the mid element is the unique element
            if (mid == 0 && nums[mid] != nums[1]) {
                return nums[mid];
            } 
            if (mid == n - 1 && nums[n - 1] != nums[n - 2]) {
                return nums[mid];
            }

            if ((nums[mid] != nums[mid - 1]) && (nums[mid] != nums[mid + 1])) {
                return nums[mid];
            }

            // Check which part of the array the single element is in
            if (mid % 2 == 1) {
                if (nums[mid] == nums[mid + 1]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else {
                if (nums[mid] == nums[mid - 1]) {
                    end = mid - 1;
                } else {
                    st = mid + 2;
                }
            }
        }
        return -1; // If no solution is found
    } 
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 5}; // Example array
    cout << "The single non-duplicate element is: " << solution.singleNonDuplicate(nums) << endl;
    return 0;
}
