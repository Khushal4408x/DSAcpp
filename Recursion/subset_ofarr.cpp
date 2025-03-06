#include <iostream>
#include<vector>
using namespace std;
void subsetarr(vector<int>arr,vector<int>&ans,int i){
if (i==arr.size()){
    for (int value:ans)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    return;
}
ans.push_back(arr[i]);
subsetarr(arr,ans,i+1);
ans.pop_back();
subsetarr(arr,ans,i+1);

}
int main(){
    vector<int>arr={1,2,3};
    vector<int>ans;
    subsetarr(arr,ans,0);
    return 0;
}