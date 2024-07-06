#include <iostream>
#include <string>
using namespace std;

bool evaluate(const string &expression) {
    bool result = true;
    char last_op = '&'; // initialize last_op to '&' as it is the first operator in the expression
    stack<bool> operands;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            result |= operands.top() && expression[i + 1];
            last_op = '|';
        } else if (expression[i] == '&') {
            result &= operands.top() && expression[i + 1];
            last_op = '&';
        } else if (expression[i] == '^') {
            result ^= operands.top() && expression[i + 1];
            last_op = '^';
        } else if (expression[i] == '~') {
            result = !result;
            last_op = '~';
        } else if (last_op == '&' || last_op == '|' || last_op == '^') {
            operands.push(expression[i]);
        }
    }

    return result;
}

int main() {
    string expression;
    getline(cin, expression);
    bool result = evaluate(expression);
    cout << (result ? "true" : "false") << endl;
    return 0;
}