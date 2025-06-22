#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    stack <int>s;
    vector<int>ans;
    vector<int>vec={56,44,3,80,45,22,95746,5,9};
    for(int i=vec.size()-1;i>=0;i--){
        
            while(!s.empty()&& s.top()<vec[i]){
                
                    s.pop();
                
             }
             if(s.empty()){
                ans.push_back(-1);
             }else{
            ans.push_back(s.top());
        }
        
        s.push(vec[i]);
    }
    reverse(ans.begin(), ans.end());
    for (auto val:ans)
    {
       cout<<val<< "  ";
    }
    
}