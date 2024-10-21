#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>> n;
    int sum=0;
    int i =0;
    /*for (int i = 0; i <= n; i++)
    {
       sum = sum +i;
    
    }*/
   while (i<=n)
   {
   sum=sum+i;
   i=i+1;
   }
   
    cout<< sum <<endl;
    return 0;
}