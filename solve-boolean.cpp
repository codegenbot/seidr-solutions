#include <string>
#include <stack>
#include <iostream>

bool solveBoolean(std::string s) {
    std::stack<bool> stack;
    for (char c : s) {
        if (c == 'T') stack.push(true);
        else if (c == 'F') stack.push(false);
        else if (c == '|') {
            bool right = stack.top(); stack.pop();
            bool left = stack.top(); stack.pop();
            stack.push(left || right);
        } 
        else if (c == '&') {
            bool right = stack.top(); stack.pop();
            bool left = stack.top(); stack.pop();
            stack.push(left && right);
        }
    }
    return stack.top();
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