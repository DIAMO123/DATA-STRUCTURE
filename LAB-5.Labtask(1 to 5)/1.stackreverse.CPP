#include <iostream>
using namespace std;
int stack1[5],Max=5,top=0;

bool isfull()
{
    if(top==Max)
    {
        return true;
    }else
    {
        return false;
    }
}
bool isempty()
{
    if(top<=0)
    {
        return true;
    }else
    {
        return false;
    }
}

int push(int n)
{
    if(isfull()==false)
    {
        stack1[top] = n;
        top++;
    }else
    {
       cout<<"push operation failed"<<endl;
    }
}

void pop()
{
    if(isempty()==false)
    {
        cout<<stack1[top-1]<<"  popped!!!!!!!!!"<<endl;
        top--;
    }else
    {
       cout<<"pop operation failed"<<endl;
    }
}

void display ()
{
    if(isempty()==false)
    {
         cout<<"current elements are -"<<endl;
        for(int i=top-1;i>=0;i--)
        {

            cout<<stack1[i]<<endl;
        }
    }else
    {
        cout<<"the stack is empty";
    }
}





int main ()
{
    display();
    cout<<endl;

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();




}
