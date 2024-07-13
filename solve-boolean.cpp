#include <iostream>
#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operatorStack;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&' || expression[i] == '|') {
            while (!operatorStack.empty() && expression[i-1] != '(' && (expression[i-1] == '&' || expression[i-1] == '|')) {
                if (expression[i-1] == '&') {
                    operatorStack.pop();
                    i--;
                    break;
                }
                else if (expression[i-1] == '|') {
                    operatorStack.pop();
                    i--;
                    break;
                }
            }
            operatorStack.push(expression[i]);
        }
        else if (expression[i] == 'T' || expression[i] == 'F') {
            int j = i + 1;
            while (j < expression.length() && (expression[j] == '&' || expression[j] == '|')) {
                j++;
            }
            string operand = expression.substr(i, j - i);
            if (operand == "T") return true;
            else if (operand == "F") return false;
        }
    }
    while (!operatorStack.empty()) {
        if (expression[0] == '&') return false;
        else if (expression[0] == '|') return true;
    }
    return true; 
}

int main() {
    string expression;
    cout << "Enter the Boolean expression: ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    cout << "Result: " << (result ? "True" : "False") << endl;
    return 0;
}