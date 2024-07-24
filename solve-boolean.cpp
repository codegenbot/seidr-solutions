#include <string>
#include <iostream>
#include <stack>

bool evaluateBooleanExpression(const std::string &expression) {
    std::stack<char> stack;
    
    for (char symbol : expression) {
        if (symbol == 't' || symbol == 'f') {
            stack.push(symbol);
        } else if (symbol == '|') {
            char operand1 = stack.top();
            stack.pop();
            char operand2 = stack.top();
            stack.pop();
            if (operand1 == 't' || operand2 == 't') {
                stack.push('t');
            } else {
                stack.push('f');
            }
        } else if (symbol == '&') {
            char operand1 = stack.top();
            stack.pop();
            char operand2 = stack.top();
            stack.pop();
            if (operand1 == 't' && operand2 == 't') {
                stack.push('t');
            } else {
                stack.push('f');
            }
        }
    }
    
    return stack.top() == 't';
}

int main() {
    std::string input;
    std::cout << "Enter the Boolean expression: ";
    std::cin >> input;
    
    bool result = evaluateBooleanExpression(input);
    
    std::cout << std::boolalpha << result << std::endl;
    
    return 0;
}