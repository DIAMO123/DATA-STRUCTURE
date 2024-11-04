#include <iostream>
#include <string>
using namespace std;

struct check {
    int date;
    int month;
    int year;
    check(int date,int month,int year)
{
    this->date=date;
    this->month=month;
    this->year=year;

}
void details()
{
    if(month%2==0 && (year % 4 == 0 && (year % 100 == 0 || year % 400 != 0)))
    {
        if(date==30 || date ==29 )
        {
          cout<<"THE DATE IS CORRECT"<<endl;
          cout<<date<<"-"<<month<<"-"<<year<<endl;
        }
       /* else if( date ==29 && (year % 4 == 0 && year % 100 == 0 || year % 400 == 0) )
        {
           cout<<"THE DATE IS CORRECT"<<endl;
          cout<<date<<"-"<<month<<"-"<<year<<endl;
        }*/

        else{cout<<"error";}
    }
    else
    {
        if(date==31 && month !=2 )
        {
          cout<<"THE DATE IS CORRECT"<<endl;
          cout<<date<<"-"<<month<<"-"<<year<<endl;
        }
        else if( date ==28 )
        {
          cout<<"THE DATE IS CORRECT"<<endl;
          cout<<date<<"-"<<month<<"-"<<year<<endl;
        }


        else{cout<<"error";}

    }





}

};


int main() {

    int date;
    int month;
    int year;
   cout<<endl<<"enter a date(dd-mon-yyyy)"<<endl;
   cin>>date;
   cin>>month;
   cin>>year;



   check ob(date,month,year);
   ob.details();




    main ();
}

