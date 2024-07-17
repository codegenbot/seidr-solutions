#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> operatorStack;
    stack<string> valueStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '|')
                operatorStack.pop(), valueStack.pop();
            operatorStack.push(expression[i]);
        } else if (expression[i] == '|') {
            while (!operatorStack.empty())
                operatorStack.pop(), valueStack.pop();
            operatorStack.push(expression[i]);
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            string val = "";
            while (i < expression.length() && (expression[i] == 'T' || expression[i] == 'F')) {
                val += expression[i];
                i++;
            }
            i--;
            valueStack.push(val);
        } 
    }

    while (!operatorStack.empty()) {
        operatorStack.pop(), valueStack.pop();
    }

    string result = valueStack.top();
    return result == "T";
}