#include <string>
#include <stack>

bool solveBoolean(std::string s) {
    bool result = false;
    std::stack<char> stack(std::deque<char>());

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

int main() {
    std::string input;
    std::cout << "Enter a Boolean expression (T/F/|/&): ";
    std::cin >> input;
    bool result = solveBoolean(input);
    std::cout << "Result: " << (result ? "True" : "False") << std::endl;
    return 0;