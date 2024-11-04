#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool areBracketsBalanced(const string& expression) {
    stack<char> brackets;

    for (int i = 0; i < expression.length(); i++) {
        char c = expression[i];
        if (c == '(' || c == '[' || c == '{') {
            brackets.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (brackets.empty()) {
                return false; // Closing bracket without corresponding opening bracket
            } else if ((c == ')' && brackets.top() == '(') ||
                       (c == ']' && brackets.top() == '[') ||
                       (c == '}' && brackets.top() == '{')) {
                brackets.pop();
            } else {
                return false; // Mismatched brackets
            }
        }
    }

    return brackets.empty(); // True if all brackets were properly matched and closed
}

int main() {
    string expression = "{[()()]}";
    if (areBracketsBalanced(expression)) {
        cout << "Sample output: true" << endl;
    } else {
        cout << "Sample output: false" << endl;
    }
    return 0;
}
