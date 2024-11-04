#include <iostream>
using namespace std;







int main()
{
   struct
{
    string name;
    int age;
    double cgpa;
    string id;
}student,teacher,boy;




    student.name="Diamond";
    student.age=21;
    student.cgpa=3.86;
    student.id="22-48152-2";
    cout<<"NAME - "<<    student.name  <<endl;
    cout<<"AGE - "<<    student.age  <<endl;
    cout<<"CGPA - "<<    student.cgpa  <<endl;
    cout<<"ID - "<<    student.id  <<endl;



    cout<<endl;

    teacher.name="Halder";
    teacher.age=26;
    cout<<"TEACHER'S NAME - "<<    teacher.name  <<endl;
    cout<<"TEACHER'S AGE - "<<    teacher.age  <<endl;

    boy.name="boy";
    boy.age=30;
    cout<<"BOY'S NAME - "<<    boy.name  <<endl;
}
