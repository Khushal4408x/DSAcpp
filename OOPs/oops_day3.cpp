#include <iostream>
using namespace std;
class student{
public:
string Name;
string branch;
double* cgpaptr;
student(string Name,string branch,double cgpa){
    this->Name=Name;
    this->branch=branch;
    cgpaptr = new double;//dynamically allocated memory
    *cgpaptr=cgpa;

}
student(student &obj){
    this->Name=obj.Name;
    this->branch=obj.branch;
    cgpaptr=new double;
    *cgpaptr=*obj.cgpaptr;
}
void getInfo(){
    cout<<"Name: "<<Name;
    cout<<endl<<"branch: "<<branch<<endl;
    cout<<"cgpa="<<*cgpaptr;
    cout<<endl;
}

};
int main(){
 student s1("Harsh","Cse",8.9);
 
 cout<<endl<<"changing cgpa "<<endl;
 student s2(s1);//neha
 s2.Name="neha";
 *(s2.cgpaptr)=9.8;
 s2.getInfo();
 s1.getInfo();
 
 }