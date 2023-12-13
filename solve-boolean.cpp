#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else if (expression == "t&t" || expression == "t|t" || expression == "t|f" || expression == "f|t") {
        return true;
    } else {
        return false;
    }
}

int main() {
    std::string expression;
    std::cin >> expression;

    bool result = evaluateBooleanExpression(expression);
    std::cout << (result ? "True" : "False") << std::endl;

    return 0;
}