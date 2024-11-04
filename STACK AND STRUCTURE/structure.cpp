#include<iostream>
using namespace std;

//named struct
struct student2{
    string name;
    string id;
    double cgpa;
};

int main()
{
    student2 obj1;
    obj1.id = "21-232-2";
    cout<<"ID: "<<obj1.id<<endl;
    cout<<endl;
    //cout<<"Hello"<<endl;
    //one variable structure
    struct {
        string name;
        string id;
        double cgpa;
    }student;

    student.name = "Abir";
    student.id ="11-238283-3";
    student.cgpa = 2.78;

    cout<<"Name: "<<student.name<<endl;
    cout<<"ID: "<<student.id<<endl;
    cout<<"CGPA: "<<student.cgpa<<endl;
    cout<<endl;

    //two variable structure
    struct {
        string name;
        int age;
    }student1,teacher;

    student1.name = "Shakib";
    student1.age = 19;
    teacher.name = "Tamim";
    teacher.age = 29;

    cout<<"Teacher name: "<<teacher.name<<endl;
    cout<<"Teacher age: "<<teacher.age<<endl;

    return 0;
}
