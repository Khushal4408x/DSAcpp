#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    vector<int>vec={1,3,5,0,-3,6};
    int target=4 ;
    int n=vec.size();
    vector<vector<int>>ans;
    set<vector<int>>s;
    for (int i = 0; i < n; i++)
    {
     for (int j = i+1; j < n; j++)
     {
        for (int k = j+1; k < n; k++)
        {
            if((vec[i]+vec[j]+vec[k])==target){
                vector<int>trip={vec[i],vec[j],vec[k]};
                sort(trip.begin(),trip.end());
                if(s.find(trip)==s.end()){
                    s.insert(trip);
                    ans.push_back(trip);
                }
                
            }
        }
        
     }
        
    }
    for (int i = 0; i <ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<endl;
        }
        
    }
    
return 0;
    
}