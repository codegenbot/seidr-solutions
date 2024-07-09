#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operatorStack;
    for (int i = 0; i < expression.length(); ++i) {
        if (expression[i] == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '|') {
                operatorStack.pop();
            }
            if (!operatorStack.empty()) {
                operatorStack.push('&');
            } else {
                return false;
            }
        } else if (expression[i] == '|') {
            while (!operatorStack.empty()) {
                operatorStack.pop();
            }
            operatorStack.push('|');
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            string operand = "";
            while (i < expression.length() && (expression[i] == 'T' || expression[i] == 'F')) {
                operand += expression[i];
                ++i;
            }
            --i;
            if (operand == "TF") return false;
            if (operand == "TT" || operand == "FF") return true;
        }
    }
    while (!operatorStack.empty()) {
        operatorStack.pop();
    }
    return true;
}

int main() {
    string expression;
    cout << "Enter a boolean expression: ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}