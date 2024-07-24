#include <string>
#include <iostream>

bool evaluateBooleanExpression(const std::string& expr) {
    std::string lowercaseExpr;
    for (char c : expr) {
        lowercaseExpr += tolower(c);
    }

    while (lowercaseExpr.find("&") != std::string::npos || lowercaseExpr.find("|") != std::string::npos) {
        size_t andPos = lowercaseExpr.find("&");
        size_t orPos = lowercaseExpr.find("|");
        if (andPos < orPos) {
            lowercaseExpr.replace(andPos - 1, 3, (lowercaseExpr[andPos - 1] == 't' && lowercaseExpr[andPos + 1] == 't') ? "t" : "f");
        } else {
            lowercaseExpr.replace(orPos - 1, 3, (lowercaseExpr[orPos - 1] == 't' || lowercaseExpr[orPos + 1] == 't') ? "t" : "f");
        }
    }

    if (lowercaseExpr == "false") {
        return false;
    }
    return true;
}

int main() {
    std::string expression;
    std::cin >> expression;
    std::cout << std::boolalpha << evaluateBooleanExpression(expression) << std::endl;
    return 0;
}