#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool issort(vector<int>arr,int n){
if (n==0||n==1){
    return true;
}
return arr[n-1]>=arr[n-2]&&issort(arr,n-1);
}
int main (){
    vector<int>arr={3,5,6,8,9};
    int n=arr.size();
  cout<<  issort(arr,n);
}