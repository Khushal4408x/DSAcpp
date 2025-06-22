#include <iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int>ans;
    stack<int>s;
    vector<int>vec={3,1,0,8,6};
    for(int i=0;i<vec.size();i++){
        while(!s.empty()&&vec[i]<s.top()){
            s.pop();
        }
        if(s.empty()){
            ans.push_back(-1);
        }
        else{
            ans.push_back(s.top());
        }
        s.push(vec[i]);
    }
    for(auto val:ans){
        cout<<val;
    }
}