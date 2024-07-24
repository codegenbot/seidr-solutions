#include <string>

bool evaluateBoolean(const string &expression) {
    stack<char> operators;
    bool current = (expression[0] == 't') ? true : false;

    for (int i = 1; i < expression.length(); i++) {
        if (expression[i] == '|') {
            while (!operators.empty() && operators.top() == '&') {
                operators.pop();
                current ^= true;
            }
            operators.push('|');
        } else if (expression[i] == '&') {
            operators.push('&');
        } else {
            current = expression[i] == 't';
        }
    }

    while (!operators.empty()) {
        operators.pop();
        current ^= true;
    }

    return current;
}