```cpp
#include <iostream>
#include <string>

bool evaluateBoolean(std::string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else if (expression.find('&') != std::string::npos) {
        size_t index = expression.find('&');
        bool left = evaluateBoolean(expression.substr(0, index));
        bool right = evaluateBoolean(expression.substr(index + 1));
        return left && right;
    } else if (expression.find('|') != std::string::npos) {
        size_t index = expression.find('|');
        bool left = evaluateBoolean(expression.substr(0, index));
        bool right = evaluateBoolean(expression.substr(index + 1));
        return left || right;
    } else {
        throw std::runtime_error("Invalid expression format.");
    }
    return false;
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