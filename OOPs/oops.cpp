#include <iostream>
using namespace std;
class Teacher
{
private:
    float salary=40000;
public:
   /*  Non para meterised const Teacher(){
        Dep="CSE";
        cout<<"obj created"<<endl;
    };*/
    //parameterised const
    //Custom copy constructor
    Teacher(Teacher &org_obj){//pass by ref
        cout<<"Iam custom copy const"<<endl;
        this->Name=org_obj.Name;
        this->salary=org_obj.salary;
        this->Dep=org_obj.Dep;
        this->subject=org_obj.subject;
    }
    Teacher(string n,string s,string d,double sal){
        Name =n;
        Dep=d;
        subject=s;
        salary=sal;
    }
    string Name="Xyz";
    string Dep;
    string subject;
    void getInfo(){
        cout<<Name;
        cout<<endl<<subject;
    }
};
int main(){
Teacher t1("Khushal","Maths","CSE",40 );//constructor called
 //t1.getInfo();
 Teacher t2(t1);
 t2.getInfo();
}