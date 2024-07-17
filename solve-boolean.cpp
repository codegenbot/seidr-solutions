Here's the corrected code:

#include <stack>
#include <string>

bool solveBoolean(string expression) {
    stack<string> stack;
    bool lastOp = false;
    bool result = false;
    for (char c : expression) {
        if (c == ' ') continue;
        if (c == '&') {
            result = !lastOp;
            stack.push(string(1, "&"));
        } else if (c == '|') {
            while (!stack.empty() && stack.top() == "&") {
                stack.pop();
                lastOp = true;
            }
            stack.push("|");
        } else {
            stack.push(c == 'T' ? "T" : "F");
            lastOp = false;
        }
    }

    while (!stack.empty()) {
        if (stack.top() == "|") {
            result ^= true;
            stack.pop();
        } else {
            result = stack.top() == "T";
            stack.pop();
            break;
        }
    }

    return !result;
}