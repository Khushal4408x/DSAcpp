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
~student(){
    cout<<"I DELETE EVERYTHING";
    delete cgpaptr;
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
 s1.getInfo();

 }