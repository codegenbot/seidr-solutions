```cpp
#include <iostream>
#include <string>

bool evaluateBoolean(const std::string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else if (expression.find_first_of('&') != std::string::npos) {
        bool left = evaluateBoolean(expression.substr(0, expression.find_first_of('&')));
        bool right = evaluateBoolean(expression.substr(expression.find_first_of('&') + 1));
        return left && right;
    } else if (expression.find_first_of('|') != std::string::npos) {
        bool left = evaluateBoolean(expression.substr(0, expression.find_first_of('|')));
        bool right = evaluateBoolean(expression.substr(expression.find_first_of('|') + 1));
        return left || right;
    } else {
        throw std::runtime_error("Invalid expression format.");
    }
}

int main() {
    std::string expression;
    std::getline(std::cin, expression);
    bool result = evaluateBoolean(expression);
    std::cout << (result ? "True" : "False") << std::endl;
    return 0;
}
```