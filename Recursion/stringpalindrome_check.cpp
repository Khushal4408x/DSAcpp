#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(int i,string s,int n){
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-i-1]){
        return false;
    }
    return ispalindrome(i+1,s,n);
}
int  main(){
    string s1="sezes";
    string s2="madam";
    cout<<ispalindrome(0,s1,s1.size());
}