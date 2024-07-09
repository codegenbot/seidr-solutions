#include <string>
#include <stack>
#include <iostream>

bool solveBoolean(std::string s) {
    bool result = true;
    std::stack<char> stack;

    for (int i = 0; i < s.size(); i++) {
        switch (s[i]) {
            case 'T':
                if (!stack.empty() && stack.top() == '|') {
                    while (!stack.empty() && stack.top() != '&') {
                        stack.pop();
                    }
                    if (!stack.empty() && stack.top() == '&') {
                        stack.pop();
                        result = true;
                    } else {
                        return false;
                    }
                }
                i++;
                break;
            case 'F':
                if (!stack.empty() && stack.top() == '|') {
                    while (!stack.empty() && stack.top() != '&') {
                        stack.pop();
                    }
                    if (!stack.empty() && stack.top() == '&') {
                        stack.pop();
                        result = false;
                    } else {
                        return false;
                    }
                }
                i++;
                break;
            case '|':
                stack.push('|');
                break;
            case '&':
                stack.push('&');
                break;
        }
    }

    return result;
}

int main() {
    std::cout << solveBoolean("T|F&F") << std::endl;
    std::cout << solveBoolean("f&f|f&f|f|f&f&f&f|t|f|t|f&f&f&f&f|f&t");
    return 0;
}