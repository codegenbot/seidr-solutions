```cpp
#include <iostream>
#include <string>

bool solveBoolean(std::string expression) {
    if (expression.size() > 0) {
        if (expression[0] == 'T' || expression[0] == 't')
            return true;
        else if (expression[0] == 'F' || expression[0] == 'f')
            return false;
    }

    for (int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        if (c == '|') {
            std::string left = expression.substr(0, static_cast<size_t>(i));
            std::string right = expression.substr(static_cast<size_t>(i + 1), expression.size() - i - 1);
            return solveBoolean(left) || solveBoolean(right);
        } else if (c == '&') {
            int j = i;
            while (j < expression.size() && expression[j] != '|' && expression[j] != '&') 
                j++;
            std::string left = expression.substr(0, static_cast<size_t>(i));
            std::string right = expression.substr(static_cast<size_t>(i + 1), j - i);
            return solveBoolean(left) && solveBoolean(right);
        }
    }
    return true;
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