```
#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    bool result = true;
    int state = 1; // assume true initially
    for (char c : expression) {
        if (c == '&') {
            state &= 1;
        } else if (c == '|') {
            state |= 1;
        } else if (c == 'f' || c == 't') {
            result = (c == 't');
            state = (c == 't');
        }
    }
    return result;
}

int main() {
    int testCases;
    std::cin >> testCases;
    for (int i = 0; i < testCases; ++i) {
        std::string expression;
        std::cin >> expression;
        std::cout << (evaluateBooleanExpression(expression) ? "True" : "False") << std::endl;
    }
    return 0;
}