```cpp
#include <string>
#include <stack>

bool solveBoolean(std::string s) {
    bool result = false;
    std::stack<char> stack;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '|') {
            while (!stack.empty() && stack.top() == '&') {
                stack.pop();
            }
            if (stack.empty()) return true;
            else stack.push('|');
        } else if (s[i] == '&') {
            stack.push('&');
        }
    }

    while (!stack.empty() && stack.top() == '&') {
        stack.pop();
    }

    return result;
}