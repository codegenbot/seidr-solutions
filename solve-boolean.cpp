#include <iostream>
#include <string>
#include <stack>

bool evaluateBooleanExpression(std::string expr) {
    std::stack<char> s;
    for (char c : expr) {
        if (c == 't' || c == 'f') {
            s.push(c);
        } else if (c == '&') {
            char operand1 = s.top(); s.pop();
            char operand2 = s.top(); s.pop();
            if (operand1 == 't' && operand2 == 't') {
                s.push('t');
            } else {
                s.push('f');
            }
        } else if (c == '|') {
            char operand1 = s.top(); s.pop();
            char operand2 = s.top(); s.pop();
            if (operand1 == 't' || operand2 == 't') {
                s.push('t');
            } else {
                s.push('f');
            }
        }
    }
    return s.top() == 't';
}

int main() {
    std::string expr;
    std::cin >> expr;
    bool result = evaluateBooleanExpression(expr);
    std::cout << (result ? "True" : "False") << std::endl;
    return 0;
}