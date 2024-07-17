```cpp
#include <stack>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    stack<string> stack;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == ' ') continue;
        if (expression[i] == '&') {
            stack.push("&");
        } else if (expression[i] == '|') {
            while (!stack.empty() && stack.top() == "&") {
                stack.pop();
            }
        } else {
            stack.push(string(1, expression[i]));
        }
    }

    bool result = true;
    while (!stack.empty()) {
        string op = stack.top();
        stack.pop();
        if (op == "&") {
            result &= (stack.top() == "T" || stack.top() == "F");
            stack.pop();
        } else if (op == "|") {
            if (stack.size() > 1) {
                result |= (stack.top() == "T" || stack.top() == "F");
                stack.pop();
            }
        } else {
            result = stack.top() == "T";
            stack.pop();
        }
    }

    return !result;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    return result ? 0 : 1;
}