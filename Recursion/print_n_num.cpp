#include<iostream>
using namespace std;
void recpr(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    cout<<n<<" ";
    recpr(n-1);
}
int main(){
    recpr(99);
}