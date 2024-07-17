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
            string s = "";
            while(i < expression.size() && (expression[i] == 'T' || expression[i] == 'F')) {
                s += expression[i];
                i++;
            }
            if(!s.empty())
                stack.push(s);
        }
    }

    bool result = true;
    while (!stack.empty()) {
        string op = stack.top();
        stack.pop();
        if (op == "&") {
            result &= (stack.top() == "T") ? true : false;
            stack.pop();
        } else if (op == "|") {
            if (stack.size() > 1) {
                result |= (stack.top() == "T") ? true : false;
                stack.pop();
            }
        } else {
            result = op == "T" ? true : false;
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