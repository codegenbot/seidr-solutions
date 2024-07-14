#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operatorStack;
    string temp = "";

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '|')
                operatorStack.pop();
            if (!operatorStack.empty() && operatorStack.top() == '&')
                operatorStack.pop();
            temp += '&';
        } else if (expression[i] == '|') {
            while (!operatorStack.empty()) {
                temp += operatorStack.top();
                operatorStack.pop();
            }
            temp += '|';
        } else {
            temp += expression[i];
        }

        if (i < expression.length() - 1 && (expression[i + 1] == '&' || expression[i + 1] == '|')) {
            operatorStack.push(expression[i]);
        }
    }

    while (!operatorStack.empty()) {
        temp += operatorStack.top();
        operatorStack.pop();
    }

    bool result = (temp == "t") ? true : false;

    return result;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    getline(cin, expression);
    cout << "Result: " << evaluateBooleanExpression(expression) << endl;
    return 0;
}