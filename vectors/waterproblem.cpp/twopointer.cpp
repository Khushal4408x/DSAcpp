#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int> &height)
{
    int n = height.size();
    long long maxarea = 0;
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int length = min(height[left], height[right]);
        int width = right - left;
        long long area = length * width;
        if (area > maxarea)
        {
            maxarea = area;
        }
        if (height[left] < height[right])
        {
            left++;
        }
        else
            right--;
    }

    return maxarea;
}
