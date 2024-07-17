#include <string>

bool solveBoolean(string expression) {
    stack<string> stack;
    bool lastOp = false;
    string result = "";
    for (char c : expression) {
        if (c == ' ') continue;
        if (c == '&') {
            result = !lastOp ? "T" : "F";
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

    return result == "T";
}