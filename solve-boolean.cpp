#include <stack>
#include <string>

bool solveBoolean(string expression) {
    stack<string> stack;
    bool lastOp = false;
    string result = "T";
    
    for (char c : expression) {
        if (c == ' ') continue;
        if (c == '&') {
            while (!stack.empty() && stack.top() == "&") {
                stack.pop();
                lastOp = true;
            }
            stack.push("&");
            lastOp = false;
        } else if (c == '|') {
            while (!stack.empty() && stack.top() == "|") {
                stack.pop();
                result = "T";
            }
            stack.push("|");
            lastOp = false;
        } else {
            stack.push(c == 'T' ? "T" : "F");
            lastOp = false;
        }
    }

    while (!stack.empty()) {
        if (stack.top() == "&") {
            result = (result == "T" && stack.pop() == "T") ? "T" : "F";
        } else {
            result = (result == "T" || stack.pop() == "T") ? "T" : "F";
        }
    }

    return result == "T";
}