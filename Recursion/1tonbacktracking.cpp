#include <iostream>
using namespace std;
void rec(int n,int i){
if(n<1){
    return;
}
rec(n-1,i);
cout<<i-n<<" ";
}
int main(){
    int N=4;
    rec(N,N);
}