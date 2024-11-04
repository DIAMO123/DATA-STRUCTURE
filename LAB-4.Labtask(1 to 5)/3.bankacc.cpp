
#include <iostream>
using namespace std;
 struct bank
{
    string accont_number;
    int balance;
    string account_holder_name;

    bank(string accont_number,int balance,string account_holder_name)
    {
        this->accont_number=accont_number;
         this->balance=balance;
          this->account_holder_name=account_holder_name;
    }
    int diposite(int amount)
    {
        balance=balance+amount;
    }
    int withdraw(int amount2)
    {
        if(amount2>balance)

        {
            cout<<"you don't have enough balance.....";
        }
        else{ balance=balance-amount2;}

    }
    void display()

    {
        cout<<"ACCOUNT'S NUMBER - "<<accont_number<<endl;
       cout<<"BALANCE - "<<balance <<endl;
      cout<<"ACCOUNT HOLDER NAME - "<< account_holder_name<<endl;
    }
};



int main()
{
    int balance,dip,with;
    string accname,accnum;

    cout<<"enter account's number - ";
    cin>>accnum;
    cout<<"enter balance - ";
    cin>>balance;
    cout<<"ENTER ACCOUNT HOLDER NAME - ";
    cin>>accname;
    cout<<"ENTER diposite amount - ";
    cin>>dip;
    cout<<"ENTER withdraw amount - ";
    cin>>with;


    bank ob(accnum,balance,accname);
    ob.diposite(dip);
    ob.withdraw(with);
    cout<<endl;
    ob.display();





main();



}

