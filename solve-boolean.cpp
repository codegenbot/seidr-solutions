#include <iostream>
#include <string>
using namespace std;
stack<char> operators; // Declare 'operators' outside of 'evaluate' function
bool evaluate(const string &expression) {
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
            char operator; // Declare 'operator' before using it in the switch statement
            switch (operator) {
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
    return result && expression != "false";
}