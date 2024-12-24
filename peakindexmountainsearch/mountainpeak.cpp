class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int st = 0, end = n - 1;
        
        while (st < end) {
            int mid = st + (end - st) / 2;
            // Check if mid is less than its next element
            if (arr[mid] < arr[mid + 1]) {
                // We are in the increasing part of the mountain
                st = mid + 1;
            } else {
                // We are in the decreasing part of the mountain
                end = mid;
            }
        }
        
        // At the end of the loop, st == end and it points to the peak
        return st; // or return end, both are the same
    }
};