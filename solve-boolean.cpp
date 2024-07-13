#include <iostream>
#include <stack>
#include <string>

bool solveBoolean(std::string expression) {
    std::stack<char> s;
    bool result = false;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) result = true;
        } else if (expression[i] == '&') {
            s.push('&');
        } else if (expression[i] == 'T') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) result = true;
        } else if (expression[i] == 'F') {
            while (!s.empty()) {
                s.pop();
            }
            result = false;
            break;
        }
    }

    return result;
}

int main() {
    std::cout << solveBoolean("T|&F") << std::endl;
    return 0;
}