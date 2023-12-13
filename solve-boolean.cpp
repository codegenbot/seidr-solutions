```cpp
#include <iostream>
#include <string>

bool evaluateBoolean(std::string expression) {
    if (expression == "T") {
        return true;
    } else if (expression == "F") {
        return false;
    } else if (expression.length() == 1) {
        throw std::runtime_error("Invalid expression format.");
    } else if (expression.find("&&") != std::string::npos) {
        bool left = evaluateBoolean(expression.substr(0, expression.find("&&")));
        bool right = evaluateBoolean(expression.substr(expression.find("&&") + 2));
        return left && right;
    } else if (expression.find("||") != std::string::npos) {
        bool left = evaluateBoolean(expression.substr(0, expression.find("||")));
        bool right = evaluateBoolean(expression.substr(expression.find("||") + 2));
        return left || right;
    } else {
        throw std::runtime_error("Invalid expression format.");
    }
}

int main() {
    std::string expression;
    std::getline(std::cin, expression);
    try {
        bool result = evaluateBoolean(expression);
        std::cout << (result ? "True" : "False") << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
```