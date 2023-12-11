```
#include <string>
#include <cctype>
#include <iostream>
using namespace std;

bool evaluate(const string& expression) {
    bool result = true;
    stack<char> operators;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            operators.push('|');
        } else if (expression[i] == '&') {
            operators.push('&');
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            result = (expression[i] == 'T');
        } else if (operators.empty()) {
            return false;
        } else {
            char op = operators.top();
            if (op == '|') {
                result |= evaluate(expression.substr(i + 1));
            } else if (op == '&') {
                result &= evaluate(expression.substr(i + 1));
            }
        }
    }
    return result;
}
```