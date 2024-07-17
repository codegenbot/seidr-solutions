```cpp
#include <stack>
#include <string>

bool solveBoolean(std::string expression) {
    stack<string> std::stack;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == ' ') continue;
        if (expression[i] == '&') {
            std::stack.push("&");
        } else if (expression[i] == '|') {
            while (!std::stack.empty() && std::stack.top() == "&") {
                std::stack.pop();
            }
        } else {
            std::stack.push(std::string(1, expression[i]));
        }
    }

    bool result = true;
    while (!std::stack.empty()) {
        string op = std::stack.top();
        std::stack.pop();
        if (op == "&") {
            result &= (std::stack.top() == "T");
            std::stack.pop();
        } else if (op == "|") {
            if (std::stack.size() > 1) {
                result |= (std::stack.top() == "T");
                std::stack.pop();
            }
        } else {
            result = op == "T";
        }
    }

    return !result;
}