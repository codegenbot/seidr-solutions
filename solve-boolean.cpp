#include <iostream>
#include <string>
#include <vector>

bool evaluateBooleanExpression(const std::string& expression) {
    std::vector<char> stack;

    for (char c : expression) {
        if (c == 'T' || c == 'F') {
            stack.push_back(c);
        } else if (c == '&') {
            char operand2 = stack.back();
            stack.pop_back();
            char operand1 = stack.back();
            stack.pop_back();
            if ((operand1 == 'T' || operand1 == 'F') && (operand2 == 'T' || operand2 == 'F')) {
                stack.push_back((operand1 == 'T' && operand2 == 'T') ? 'T' : 'F');
            }
        } else if (c == '|') {
            char operand1 = stack.back();
            stack.pop_back();
            char operand2 = stack.back();
            stack.pop_back();
            if ((operand1 == 'T' || operand1 == 'F') && (operand2 == 'T' || operand2 == 'F')) {
                stack.push_back((operand1 == 'T' || operand2 == 'T') ? 'T' : 'F');
            }
        }
    }

    return stack[0] == 'T';
}

int main() {
    std::string expression;
    std::cin >> expression;

    std::cout << std::boolalpha << evaluateBooleanExpression(expression) << std::endl;

    return 0;
}