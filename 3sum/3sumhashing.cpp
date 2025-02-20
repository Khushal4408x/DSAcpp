#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    vector<int>vec={-1,0,1,2,-1,-4};
    int targ=0 ;
    int n=vec.size();
  vector<vector<int>>ans;
  set<vector<int>>uniqelem;
    
    for (int i = 0; i < n; i++)
    {
        set<int>s;
     for (int j = i+1; j < n; j++)
     {
       int c= targ-(vec[i]+vec[j]);
        if(s.find(c)!=s.end()){
            vector<int>trip={vec[i],vec[j],c};
            sort(trip.begin(),trip.end());
            uniqelem.insert(trip);
        }
        else{
            s.insert(vec[j]);
        }
     
        
     }
        
    }
    for(auto trip:uniqelem){
        ans.push_back(trip);
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