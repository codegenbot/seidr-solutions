#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operatorStack;
    stack<string> valueStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&' || expression[i] == '|') {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                char op = operatorStack.top();
                operatorStack.pop();
                string right = valueStack.top();
                valueStack.pop();
                string left = valueStack.top();
                valueStack.pop();

                if (op == '&') {
                    valueStack.push(to_string((left == "True" && right == "True") ? "True" : "False"));
                } else {
                    valueStack.push(to_string((left == "True" || right == "True") ? "True" : "False"));
                }
            }
            operatorStack.pop(); // pop the '('
        } else if (expression[i] == '(') {
            operatorStack.push(expression[i]);
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            string value = "";
            while (i < expression.length() && (expression[i] == 'T' || expression[i] == 'F')) {
                value += expression[i];
                i++;
            }
            i--; // backtrack
            valueStack.push(value);
        }
    }

    return valueStack.top() == "True";
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    cin >> input;

    bool result = evaluateBooleanExpression(input);

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}