#include <iostream>
#include <string>

bool evaluateBoolean(const std::string& expr) {
    if (expr == "t") {
        return true;
    } else if (expr == "f") {
        return false;
    } else if (expr.size() == 3) {
        return expr[0] == 't' && expr[2] == 't';
    } else if (expr.size() == 3) {
        return expr[0] == 't' || expr[2] == 't';
    } else {
        return false;
    }
}

int main() {
    std::string expression;
    std::cin >> expression;
    std::cout << (evaluateBoolean(expression) ? "True" : "False") << std::endl;
    return 0;
}