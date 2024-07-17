#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> opStack;
    stack<string> numStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|') {
                opStack.pop();
                string operand2 = numStack.top();
                numStack.pop();
                string operand1 = numStack.top();
                numStack.pop();
                numStack.push((operand1 + " & " + operand2).c_str());
            }
        } else if (expression[i] == '|') {
            while (!opStack.empty() && opStack.top() == '&') {
                opStack.pop();
                string operand2 = numStack.top();
                numStack.pop();
                string operand1 = numStack.top();
                numStack.pop();
                numStack.push((operand1 + " | " + operand2).c_str());
            }
        } else if (expression[i] == 't') {
            numStack.push("True");
        } else if (expression[i] == 'f') {
            numStack.push("False");
        } else {
            cout << "Invalid input. Only T, F, |, and & are allowed." << endl;
            return false;
        }
    }

    while (!opStack.empty()) {
        opStack.pop();
    }

    if (numStack.size() > 1) {
        cout << "Invalid input. The expression must be a single boolean value." << endl;
        return false;
    }

    string result = numStack.top();
    cout << result << endl;

    return result == "True";
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string expression;
        cin >> expression;
        evaluateBooleanExpression(expression);
    }

    return 0;
}