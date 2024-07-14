#include <string>
#include <stack>
#include <iostream>

bool solveBoolean(std::string s) {
    std::stack<bool> boolStack;
    std::stack<char> operatorStack;

    for (char c : s) {
        if (c == 'T' || c == 'F') {
            boolStack.push(c == 'T');
        } 
        else if (c == '|') {
            while (!operatorStack.empty() && operatorStack.top() == '&') {
                bool right = boolStack.top(); boolStack.pop();
                bool left = boolStack.top(); boolStack.pop();
                stack.push(left && right);
                operatorStack.pop();
            }
            operatorStack.push('|');
        } 
        else if (c == '&') {
            operatorStack.push('&');
        } 
        else if (c == '(') {
            operatorStack.push('(');
        } 
        else if (c == ')') {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                char op = operatorStack.top(); operatorStack.pop();
                bool right = boolStack.top(); boolStack.pop();
                bool left = boolStack.top(); boolStack.pop();
                if (op == '|') stack.push(left || right);
                else stack.push(left && right);
            }
            operatorStack.pop(); // consume '('
        }
    }

    while (!operatorStack.empty()) {
        char op = operatorStack.top(); operatorStack.pop();
        bool right = boolStack.top(); boolStack.pop();
        bool left = boolStack.top(); boolStack.pop();
        if (op == '|') stack.push(left || right);
        else stack.push(left && right);
    }

    return boolStack.top();
}

int main() {
    std::string s = "T|F&";
    bool result = solveBoolean(s);
    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}