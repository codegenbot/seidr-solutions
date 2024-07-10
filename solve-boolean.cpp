#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operatorStack;
    stack<string> operandStack;

    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];

        if (ch == 'T' || ch == 'F') {
            string str(1, ch);
            operandStack.push(str);
        } else if (ch == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '|') {
                operatorStack.pop();
                string op1 = operandStack.pop();
                string op2 = operandStack.pop();
                string result = (op1 == "T" && op2 == "T") ? "T" : "F";
                operandStack.push(result);
            }
            operatorStack.push(ch);
        } else if (ch == '|') {
            while (!operatorStack.empty()) {
                operatorStack.pop();
            }
            operatorStack.push(ch);
        }
    }

    return operandStack.top() == "T";
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;

    if (expression.length() > 0) {
        bool result = evaluateBooleanExpression(expression);

        if (result)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }

    return 0;
}