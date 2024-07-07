#include <iostream>
#include <string>
using namespace std;

bool evaluate(const string &expression) {
    stack<char> operators;
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            operators.push('|');
        } else if (expression[i] == '&') {
            operators.push('&');
        } else if (expression[i] == '^') {
            operators.push('^');
        } else if (operators.empty()) {
            result = true;
        } else {
            char op = operators.top();
            switch (op) {
                case '|':
                    result |= expression[i];
                    break;
                case '&':
                    result &= expression[i];
                    break;
                case '^':
                    result ^= expression[i];
                    break;
            }
        }
    }
    return result;
}