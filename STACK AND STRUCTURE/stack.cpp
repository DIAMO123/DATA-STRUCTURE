#include<iostream>
using namespace std;

int stack1[2], n = 2, top = 0;
bool isfull()
{
    if(top == n)
        return true;
    else
        return false;
}
bool isempty()
{
    if (top <= 0)
        return true;
    else
        return false;
}
void push(int value)
{
    if(isfull() == false) //stack is not full
    {
        stack1[top] = value;
        top++;
    }
    else
    {
        cout<<"Push operation failed!!"<<endl;
    }
}
void pop()
{
    if(isempty() == false) //stack is not empty
    {
        cout<<stack1[top-1]<<" popped!"<<endl;
        top--;
    }
    else
        cout<<"Pop operation failed!"<<endl;
}
void display()
{
    if(isempty() == false)
    {
        cout<<"Current stack elements are:"<<endl;
        for(int i = top-1;i>=0;i--)
            cout<<stack1[i]<<endl;
    }
    else
        cout<<"Nothing to show as the stack is empty"<<endl;
}
int main()
{
    display();
    pop();
    push(1);
    push(2);
    cout<<endl;
    display();
    cout<<endl;
    push(3);
    pop();
    cout<<endl;
    display();
    cout<<endl;
    pop();
    pop();
    pop();
    display();
    return 0;
}
