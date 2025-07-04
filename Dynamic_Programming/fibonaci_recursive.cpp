#include <iostream>
using namespace std;
int fibo(int x){
    if (x<0){
        return -1;
    }
    else if (x<=1){
        return 1;
    }
    return fibo(x-1)+fibo(x-2);
}
int main(){
    cout<<fibo (6)<<endl;
    cout<<fibo(7)<<endl;
    cout<<fibo(8)<<endl;
    cout<<fibo(59)<<endl;
}