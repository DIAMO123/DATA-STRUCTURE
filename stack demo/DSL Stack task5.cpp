#include <iostream>
#include <stack>
#include <string>

using namespace std;

int evaluatePostfixExpression(string postfixExpression)
{
    stack<int> numbers;

    int i = 0; // Index to traverse the postfixExpression string

    while (i < postfixExpression.length())
    {
        if (isdigit(postfixExpression[i]))
        {
            // Extract the number and push it onto the stack
            int num = 0;
            while (i < postfixExpression.length() && isdigit(postfixExpression[i]))
            {
                num = num * 10 + (postfixExpression[i] - '0');
                i++;
            }
            numbers.push(num);
        }
        else if (postfixExpression[i] == ' ')
        {
            // Ignore spaces in the postfixExpression
            i++;
        }
        else
        {
            // Extract the operator and perform the operation
            int num2 = numbers.top();
            numbers.pop();
            int num1 = numbers.top();
            numbers.pop();

            char op = postfixExpression[i];
            int result;

            switch (op)
            {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            default:
                result = 0;
            }

            numbers.push(result);

            i++; // Move to the next character in postfixExpression
        }
    }

    return numbers.top();
}

int main()
{
    string postfixExpression = "5 3 + 6 *";
    int result = evaluatePostfixExpression(postfixExpression);
    cout << "Sample output: " << result << endl;
    return 0;
}
