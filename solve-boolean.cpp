```cpp
#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    std::stack<char> operationStack;

    for (char c : s) {
        if (c == 'T' || c == 'F') {
            if (result != (c == 'T')) return false;
        } else if (c == '&') {
            operationStack.push('&');
            result = true;
        } else if (c == '|') {
            while (!operationStack.empty() && operationStack.top() == '|') {
                operationStack.pop();
            }
            if (!operationStack.empty()) {
                operationStack.pop();
                if (result != false) return false;
                result = true;
            } else {
                result = !result;
            }
        }
    }

    while (!operationStack.empty()) {
        if (operationStack.top() == '|') {
            operationStack.pop();
            if (!operationStack.empty()) {
                operationStack.pop();
                result = !result;
            } else {
                return false;
            }
        } else {
            return !result;
        }
    }

    return true;
}