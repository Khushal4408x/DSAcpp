#include<iostream>
#include<vector>
using namespace std;
class stack{
public:
    vector<int>v;
    void push_back(int val){
        v.push_back(val);
    }
    void pop(){
        if(!v.empty()){v.pop_back();}
        
    }
    int top(){
        if(!v.empty()){ return v[v.size()-1];}
       throw runtime_error("Stack is empty");
    }
    bool empty(){
        if(v.size()==0){
            return true;
        }
        return false;
    }
};
int main(){
    stack st;
   /* st.push_back(4);
    st.push_back(3);
    st.push_back(2);
    st.push_back(1);
    st.push_back(0);
    st.pop();*/
    cout<<st.top();
}