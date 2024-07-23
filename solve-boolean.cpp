```c++
#include <iostream>
#include <string>

bool solveBoolean(std::string expression) {
    for (int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        if (c == '|') {
            bool left = (expression.substr(0, i) == "T" || expression.substr(0, i) == "t");
            bool right = (expression.substr(i + 1) == "T" || expression.substr(i + 1) == "t");
            return left || right;
        } else if (c == '&') {
            bool left = (expression.substr(0, i) == "T" || expression.substr(0, i) == "t");
            bool right = (expression.substr(i + 1) == "T" || expression.substr(i + 1) == "t");
            return left && right;
        }
    }
    
    if (expression.size() > 0) {
        if (expression[0] == 'T' || expression[0] == 't')
            return true;
        else
            return false;
    } else 
        return false; // default value
    
}

int main() {
    std::string expression;
    std::cout << "Enter a Boolean expression: ";
    std::cin >> expression;
    bool result = solveBoolean(expression);
    if (result)
        std::cout << "True";
    else
        std::cout << "False";
    return 0;
}