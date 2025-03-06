#include<iostream>
#include<array>
using namespace std;

void arrswaap(int i,int arr[],int n){
    
    if(i>=(n/2)){return;}
    swap(arr[i],arr[n-i-1]);
    arrswaap(i+1,arr,n);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(*arr);
    arrswaap(0,arr,n);
    for(int i=0;i<(sizeof(arr)/sizeof(*arr));i++){
        cout<<arr[i]<<" ";
    }
    
}