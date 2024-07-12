#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    bool result = true;
    for (char c : expression) {
        if (c == 't') {
            result = true;
        } else if (c == 'f') {
            result = false;
        } else if (c == '|') {
            return result | evaluateBooleanExpression(expression.substr(expression.find(c) + 1));
        } else if (c == '&') {
            return result & evaluateBooleanExpression(expression.substr(expression.find(c) + 1));
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