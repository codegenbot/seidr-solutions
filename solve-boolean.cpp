#include <iostream>
#include <string>
#include <vector>

bool evaluateBooleanExpression(const std::string& expression) {
    bool result = true;

    for (char c : expression) {
        if (c == 'T') result = true;
        else if (c == 'F') result = false;
        else if (c == '&') {
            result = result && true;
        } else if (c == '|') {
            result = result || false;
        }
    }

    return result;
}

int main() {
    std::string expression;
    std::cin >> expression;

    std::cout << std::boolalpha << evaluateBooleanExpression(expression) << std::endl;

    return 0;
}