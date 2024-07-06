#include <iostream>
#include <string>
using namespace std;

bool evaluate(const string &expression) {
    bool result = true;
    int op_count = 0; // count of operators in the expression
    stack<bool> operands; // stack to keep track of operands and their precedence

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|' || expression[i] == '&' || expression[i] == '^') {
            // Handle operators with multiple operands
            op_count++;
            if (op_count > 1) {
                // If there are multiple operators, we need to pop the previous operator and its operand from the stack
                bool prev_operator = operands.top();
                operands.pop();
                bool prev_operand = operands.top();
                operands.pop();

                // Evaluate the expression using the current operator and operand, and push the result back onto the stack
                if (expression[i] == '|') {
                    result |= prev_operator && prev_operand;
                } else if (expression[i] == '&') {
                    result &= prev_operator || prev_operand;
                } else if (expression[i] == '^') {
                    result ^= prev_operator ^ prev_operand;
                }
            }
        } else if (expression[i] == '~') {
            // Handle negation operator
            result = !result;
        } else {
            // If the current character is not an operator, it must be a variable (T or F)
            operands.push(expression[i] == 'T');
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