#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&vec,int st,int mid,int end){
    vector<int >temp;
    int j=mid+1;
    int i=st;
    while(i<=mid&&j<=end){
        if(vec[i]>=vec[j]){
            temp.push_back(vec[j]);
            j++;
        }
        else{
            temp.push_back(vec[i]);
            i++;
        }
    }
    while (i<=mid)
    {
     temp.push_back(vec[i]);i++;
    }
    while(j<=end){
     temp.push_back(vec[j]);j++;
    }
    for (int idx = 0; idx< temp.size(); idx++)
    {
       vec[st+idx]=temp[idx];
    }
}
void mergesort(vector<int>&vec,int st,int end){
    if(st>=end){
        return;
    }
    int mid=st+(end-st)/2;
    mergesort(vec,st,mid);//left
    mergesort(vec,mid+1,end);//right
    merge(vec,st,mid,end);
}
int main(){
    vector<int>vec={7,6,4,9,0,4};
    int st=0;
    int end=vec.size()-1;
    mergesort(vec,st,end);
    for(int num:vec){
        cout<<num<<" ";
    
    }
}