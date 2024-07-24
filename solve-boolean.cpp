#include <iostream>
#include <string>
#include <cctype>

bool evaluateBooleanExpression(const std::string& expr) {
    std::string lowercaseExpr;
    for (char c : expr) {
        lowercaseExpr += std::tolower(c);
    }
    if (lowercaseExpr == "false") {
        return false;
    }

    bool result = lowercaseExpr[0] == 't';

    for (int i = 1; i < lowercaseExpr.size(); i += 2) {
        char op = lowercaseExpr[i];
        char val = lowercaseExpr[i + 1];

        if (op == '|') {
            result = result || (val == 't');
        } else if (op == '&') {
            result = result && (val == 't');
        }
    }

    return result;
}

int main() {
    std::string expression;
    std::cout << "Enter a Boolean expression: ";
    std::cin >> expression;

    bool result = evaluateBooleanExpression(expression);

    std::cout << "Result: " << std::boolalpha << result << std::endl;

    return 0;
}