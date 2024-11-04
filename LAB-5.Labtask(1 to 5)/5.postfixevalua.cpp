
#include <iostream>
#include <stack>
using namespace std;
int postfixeva(string expre)
{
    stack<int>st;

    for(int i =0;i<expre.length();i++)
    {
        if (expre[i]>='0' && expre[i]<='9')
        {
            st.push(expre[i]-'0');
        }

        else
        {
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();

            switch(expre[i])
            {
            case '+':
                st.push(op1+op2);
                break;
                case '-':
                st.push(op1-op2);
                break;case '*':
                st.push(op1*op2);
                break;case '/':
                st.push(op1/op2);
                break;
            }
        }
    }
    return st.top();
}


int main()
{
    cout<<postfixeva("20+2/5*7+")<<endl;
}
