#include <iostream>
#include <vector>
using namespace std;
int rotsearcharr (vector <int> nums,int target ){
   int n= nums.size();
    if(n==0){
        return -1;
    }
    int st= 0;
    int end= n-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(target==nums[mid]){
            return mid;
        }
        if(nums[mid]>= nums[st]){  // left sorted
            if (target < nums[mid]&&target>=nums[st] ){
                end=mid-1;
            }
            else st=mid+1;
        }
        else if  (nums[mid]<nums[end]){ // right sorted
            if (target >nums[mid]&& target <= nums[end] ){
                st=mid+1;
            }
            else end = mid-1;
        }
    }
 return -1;
 }
 int main ( ){
    vector<int> nums={2,6,7,1,0,-1};
    int target= 1;
    rotsearcharr( nums, target);
  
 }
