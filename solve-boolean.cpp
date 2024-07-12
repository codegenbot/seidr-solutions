```c++
#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    bool andOperation = true;
    bool result = true;
    for (char c : expression) {
        if (c == '|') {
            andOperation = false;
        } else if (c == '&') {
            andOperation = true;
        } else {
            result = (andOperation ? (result & (c == 't')) : (result | (c == 't')));
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