```cpp
#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool left = evaluateBooleanExpression(expression.substr(0, expression.find("&")));
        bool right = evaluateBooleanExpression(expression.substr(expression.find("&") + 1));
        return left && right;
    }
}

int main() {
    std::string expression;
    getline(std::cin, expression);

    bool result = evaluateBooleanExpression(expression);

    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}
```