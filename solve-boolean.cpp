#include <string>

bool solveBoolean(string expression) {
    stack<string> stack;
    bool lastOp = false;
    string result = "T";
    for (char c : expression) {
        if (c == ' ') continue;
        if (c == '&') {
            while (!stack.empty() && stack.top() != "|") stack.pop();
            result = (result == "F") ? "F" : "T";
            stack.push(string(1, "&"));
        } else if (c == '|') {
            while (!stack.empty() && stack.top() != "&") stack.pop();
            stack.push(string(1, "|"));
            lastOp = false;
        } else {
            stack.push(c == 'T' ? "T" : "F");
            lastOp = false;
        }
    }

    while (!stack.empty()) stack.pop();

    return result == "T";
}