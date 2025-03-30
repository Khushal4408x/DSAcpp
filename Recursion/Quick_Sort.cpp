#include <iostream>
#include <vector>
using namespace std;
int func(vector<int>&vec,int low,int high){
    int pviot=low;
    int i=low;
    int j=high;
    while(i<j){
        while(vec[i]<=vec[pviot]&&i<high){
            i++;
        }
        while(vec[j]>vec[pviot]&& j>low){
            j--;
        }
        if(i<j){swap(vec[i],vec[j]);}//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    }
   
        swap(vec[low],vec[j]);
    
    return j;
}
void quick_sort(vector<int>&vec,int low,int high){
    if(low<high){
        int pviot=low;
        int pidx=func(vec,low,high);
        quick_sort(vec,low,pidx-1);
        quick_sort(vec,pidx+1,high);
    
    }
}
int main(){
vector<int>vec={3,4,3,1,9,0};
int low=0;
int high=vec.size()-1;
quick_sort(vec,low,high);
for (int num:vec)
{
    cout<<num<<" ";
}

}