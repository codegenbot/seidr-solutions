#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    bool result = true;
    int operation = 0; // Flag for AND (0), OR (1)
    char currentBit = ' ';
    for (char c : expression) {
        if (c == '&') {
            operation = 0;
            currentBit = ' ';
        } else if (c == '|') {
            operation = 1;
            currentBit = ' ';
        } else if (c != 't' && c != 'f') {
            if (operation) {
                result |= (c == 't');
            } else {
                result &= (c == 't');
            }
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