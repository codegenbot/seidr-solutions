#include <stack>
bool solveBoolean(std::string s) {
    std::stack<bool> stack;
    bool left = true;
    for (char c : s) {
        if (c == 'T') {
            stack.push(true);
        } else if (c == 'F') {
            stack.push(false);
        } else if (c == '|') {
            right = stack.top(); stack.pop();
            left = stack.top(); stack.pop();
            stack.push(left || right);
        } else if (c == '&') {
            right = stack.top(); stack.pop();
            left = stack.top(); stack.pop();
            stack.push(left && right);
        }
    }
    return stack.top();
}