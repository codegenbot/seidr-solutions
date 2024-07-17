```c++
#include <stack>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
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
            if(expression[i] == 'T' || expression[i] == 'F')
                std::stack.push(std::to_string(expression[i]));
        }
    }

    bool result = true;
    while (!std::stack.empty()) {
        string op = std::stack.top();
        std::stack.pop();
        if (op == "&") {
            result &= (std::stack.top() == "T") ? true : false;
            std::stack.pop();
        } else if (op == "|") {
            if (std::stack.size() > 1) {
                result |= (std::stack.top() == "T") ? true : false;
                std::stack.pop();
            }
        } else {
            result = op == "T" ? true : false;
        }
    }

    return !result;
}