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
            size_t pos = 0;
            std::string left = expression.substr(pos, i - pos);
            pos = i + 1;
            std::string right = expression.substr(pos);
            return solveBoolean(left) || solveBoolean(right);
        } else if (c == '&') {
            int j = i;
            while (j < expression.size() && expression[j] != '|' && expression[j] != '&') 
                j++;
            size_t pos = 0;
            std::string left = expression.substr(pos, i - pos);
            pos = i + 1;
            size_t rightIndex = j - i - 1;
            std::string right = expression.substr(i + 1, rightIndex);
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