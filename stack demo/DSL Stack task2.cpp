#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

int calculate(string expression)
{
    stack<int> numbers;
    stack<char> operators;
    int num = 0;
    char lastOp = '+';

    for (int i = 0; i < expression.length(); i++)
    {
        char c = expression[i];
        if (isdigit(c))
        {
            num = num * 10 + (c - '0');  // Construct multi-digit numbers
        }
        else if (c != ' ')
        {
            // Process the previous number and last encountered operator
            switch (lastOp)
            {
            case '+':
                numbers.push(num);
                break;
            case '-':
                numbers.push(-num);
                break;
            case '*':
            {
                int num2 = numbers.top();
                numbers.pop();
                numbers.push(num2 * num);
                break;
            }
            case '/':
            {
                int num2 = numbers.top();
                numbers.pop();
                numbers.push(num2 / num);
                break;
            }
            }

            num = 0; // Reset num for the next number
            lastOp = c;
        }
    }

    // Process the last number and operator
    switch (lastOp)
    {
    case '+':
        numbers.push(num);
        break;
    case '-':
        numbers.push(-num);
        break;
    case '*':
    {
        int num2 = numbers.top();
        numbers.pop();
        numbers.push(num2 * num);
        break;
    }
    case '/':
    {
        int num2 = numbers.top();
        numbers.pop();
        numbers.push(num2 / num);
        break;
    }
    }

    // Calculate the final result
    int result = 0;
    while (!numbers.empty())
    {
        result += numbers.top();
        numbers.pop();
    }

    return result;
}

int main()
{
    string expression = "3 + 5 * 2";
    int result = calculate(expression);
    cout << "Sample output: " << result << endl;
    return 0;
}
