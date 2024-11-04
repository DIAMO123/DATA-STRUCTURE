#include <iostream>
#include <stack>

using namespace std;

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;

    else if (op == '*' || op == '/')
        return 2;

    else
        return 0;
}

string itp(string infixExpression)//infixToPostfix
{
    string postfix;

    stack<char> operators;

    for (char c : infixExpression)
    {
        if (isdigit(c))
        {
            postfix += c;
            postfix += ' ';
        }
        else if (c == '(')
        {
            operators.push(c);
        }
        else if (c == ')')
        {
            while (!operators.empty() && operators.top() != '(')
            {
                postfix += operators.top();
                postfix += ' ';
                operators.pop();
            }
            if (!operators.empty() && operators.top() == '(')
            {
                operators.pop(); // Pop the '(' from the stack
            }
        }
        else
        {
            while (!operators.empty() && precedence(operators.top()) >= precedence(c))
            {
                postfix += operators.top();
                postfix += ' ';
                operators.pop();
            }
            operators.push(c);
        }
    }

    while (!operators.empty())
    {
        postfix += operators.top();
        postfix += ' ';
        operators.pop();
    }

    return postfix;
}

int main()
{
    string infixExpression = "1 * 2 + 3 * 4";
    string postfixExpression = itp(infixExpression);
    cout << "Sample output: " << postfixExpression << endl;
    return 0;
}
