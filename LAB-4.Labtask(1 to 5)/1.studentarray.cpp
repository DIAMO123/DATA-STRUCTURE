#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    int rollNumber;
    Student(string name,int age,int rollNumber)
{
    this->name=name;
    this->age=age;
    this->rollNumber=rollNumber;

}
void details()
{
    cout<<"name - "<<name<<endl;
    cout<<"age - "<<age<<endl;
      cout<<"roll number - "<<rollNumber<<endl;
}

};


int main() {

   Student ob("sakib",20,100);
   ob.details();




    return 0;
}

