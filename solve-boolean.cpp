#include <string>

bool solveBoolean(string expression) {
    stack<string> stack;
    bool lastOp = false;
    string result = "T";
    for (char c : expression) {
        if (c == ' ') continue;
        if (c == '&') {
            while (!stack.empty() && stack.top() != "|") {
                if (stack.top() == "F")
                    result = "F";
                else
                    result = "T";
                stack.pop();
            }
            lastOp = false;
        } 
        else if (c == '|') {
            while (!stack.empty()) {
                if (stack.top() == "&") {
                    if (result == "F")
                        result = "F";
                    else
                        result = "T";
                    break;
                } else if (stack.top() == "|") {
                    stack.pop();
                    lastOp = true;
                    break;
                }
            }
        } 
        else {
            if (c == 'T')
                stack.push("T");
            else
                stack.push("F");
            lastOp = false;
        }
    }

    return result == "T";
}