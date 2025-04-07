#include <iostream>
using namespace std;

class Person {
public:
    string Name;
    int age;
    Person(string Name, int age) {
        this->Name = Name;
        this->age = age;
    }
};

class student : virtual public Person { // Virtual inheritance
public:
    int Rollno;
    student(int Rollno, string Name, int age) : Person(Name, age) { // Pass arguments to base class constructor
        this->Rollno = Rollno;
    }
};

class Teacher : virtual public Person { // Virtual inheritance
public:
    string subject;
    Teacher(string Name, int age, string subject) : Person(Name, age) { // Pass arguments to base class constructor
        this->subject = subject;
    }
};

class TA : public student, public Teacher {
public:
    TA(string Name, int age, string subject, int Rollno) 
        : Person(Name, age), student(Rollno, Name, age), Teacher(Name, age, subject) { // Pass arguments to all base classes
    }

    void getInfo() {
        cout << "Name: " << Name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Roll No: " << Rollno << endl;
    }
};

int main() {
    TA t1("Harsh", 18, "maths", 30);
    t1.getInfo();
    return 0;
}
    