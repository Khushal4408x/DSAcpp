#include <iostream>
using namespace std ;
#include <stack>
#include<vector>
int main(){
    vector<int>price={100,80,60,70,60,75,85};
    vector<int>span(price.size(),0);
    stack<int>s;
    int prevhigh;
    for(int i=0;i<price.size();i++){
        while(s.size()>0&&(price[s.top()]<=price[i])) {
            s.pop();
        }
        if(s.empty()){
            span[i]=i+1;
        }
        else{
            span[i]=(i-s.top());
        }
        s.push(i); }

     for(auto val:span) {
        cout<<val<<", ";
     }   }