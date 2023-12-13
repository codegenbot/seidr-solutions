```cpp
#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    bool result = false;
    bool hasTrue = false;
    bool hasFalse = false;

    for (char c : expression) {
        if (c == 't') {
            hasTrue = true;
        } else if (c == 'f') {
            hasFalse = true;
        }
    }

    if (hasTrue && !hasFalse) {
        return true;
    } else if (!hasTrue && hasFalse) {
        return false;
    }

    bool currentResult = false;
    bool isOperand = true;

    for (char c : expression) {
        if (c == '&') {
            isOperand = true;
        } else if (c == '|') {
            result |= currentResult;
            isOperand = true;
        } else {
            currentResult = (c == 't');
            if (isOperand) {
                result = currentResult;
                isOperand = false;
            } else if (result && !currentResult) {
                result = false;
            }
        }
    }

    return result;
}

int main() {
    std::string expression;
    std::cin >> expression;

    bool result = evaluateBooleanExpression(expression);
    std::cout << (result ? "True" : "False") << std::endl;

    return 0;
}
```