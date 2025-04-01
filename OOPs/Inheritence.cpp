#include <iostream>
using namespace std;
class Person{
 public:
    string Name;
    int age;
};
class student : public Person{
public:
int Rollno;
student(int Rollno){

}
void getInfo(){
    cout<<"Name: "<<Name;

}

};
int main(){
 student s1(30);
 s1.Name="Khushal";
 s1.age=19;
 
}