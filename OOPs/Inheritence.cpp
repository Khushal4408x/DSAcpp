#include <iostream>
using namespace std;
class Person{
 public:
    string Name;
    int age;
    Person(string Name,int age){
        this->Name=Name;
        this->age=age;
    }
};
class student : public Person{//Single level inheritence
public:
int Rollno;
student(int Rollno,string Name,int age):Person(Name,age){
this->Rollno=Rollno;
}
void getInfo(){
    cout<<"Name: "<<Name<<endl;
    cout<<"Roll No."<<Rollno<<endl;
}

};
class GradStud: public student{//Multi level Inheritence
    public:
     string resArea;
     GradStud(int Rollno, string Name, int age, string resArea) : student(Rollno, Name, age){
        this->resArea=resArea;
     }
     void getInfo(){
        cout<<"Name"<< Name;
        cout<<endl<<"Age "<<age<<endl;
        cout<<Rollno<<endl;
     }
};
int main(){
 student s1(30,"Khushal",18);
 s1.getInfo();
 GradStud s2(25, "Harsh", 19, "Physics");
 
s2.getInfo();
 
}