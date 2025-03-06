#include<iostream>
#include<algorithm>
using namespace std;
void reverse(int l,int r,int arr[]){
    if(arr[l]>=arr[r]){
        return;
    }//here swap function can also be used 
    int temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;;
    return reverse(l+1,r-1,arr);
}
int main(){
    int arr[]={3,4,5,6,7};
    int l=0;
    int r=sizeof(arr)/sizeof(*arr)-1;
    reverse(l,r,arr);
    for (int i = 0; i <r+1; i++)
    {
        cout<<arr[i]<<", ";
    }
    
}