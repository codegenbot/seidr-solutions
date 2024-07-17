#include <stack>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    stack<string> std;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == ' ') continue;
        if (expression[i] == '&') {
            std.push("&");
        } else if (expression[i] == '|') {
            while (!std.empty() && std.top() == "&") {
                std.pop();
            }
        } else {
            std.push(string(1, expression[i]));
        }
    }

    bool result = true;
    while (!std.empty()) {
        string op = std.top();
        std.pop();
        if (op == "&") {
            result &= (std.top() == "T");
            std.pop();
        } else if (op == "|") {
            if (std.size() > 1) {
                result |= (std.top() == "T");
                std.pop();
            }
        } else {
            result = op == "T";
        }
    }

    return !result;
}