#include <iostream>
using namespace std;
int parameter_rec(int n,int sum){
if(n<1){
    return sum;
}
parameter_rec(n-1,sum+n);

}
int main(){
   cout<< parameter_rec(3,0);
}