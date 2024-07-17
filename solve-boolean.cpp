#include <string>
bool solveBoolean(string expression) {
    stack<string> stack;
    bool lastOp = false;
    string result = "T"; // Initialize with True
    for (char c : expression) {
        if (c == ' ') continue;
        if (c == '&') {
            while (!stack.empty() && stack.top() != "|") stack.pop();
            stack.push(string(1, "&"));
        } else if (c == '|') {
            while (!stack.empty()) {
                if (stack.top() == "&") {
                    if (result == "T" || result == "F")
                        result = (result == "T") ? "T" : "F";
                    else return false;
                }
                stack.pop();
            }
            stack.push("|");
        } else {
            if (c == 'T' || c == 'F') stack.push(c == 'T' ? "T" : "F");
            lastOp = false;
        }
    }

    while (!stack.empty()) {
        if (stack.top() == "&") return false;
        stack.pop();
    }
    
    return result == "T";
}