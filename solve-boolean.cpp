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
            size_t left_end = 0;
            size_t right_start = i + 1;

            for (; left_end < i; left_end++) {
                if (expression[left_end] == '|') {
                    break;
                }
            }

            for (; right_start <= expression.size(); right_start++) {
                if (expression[right_start] == '|') {
                    break;
                }
            }

            std::string left = expression.substr(0, left_end);
            std::string right = expression.substr(right_start, expression.size() - right_start);

            return solveBoolean(left) || solveBoolean(right);
        } else if (c == '&') {
            size_t left_end = 0;
            size_t right_start = i + 1;

            for (; left_end < i; left_end++) {
                if (expression[left_end] == '|' || expression[left_end] == '&') {
                    break;
                }
            }

            for (; right_start <= expression.size(); right_start++) {
                if (expression[right_start] == '|' || expression[right_start] == '&') {
                    break;
                }
            }

            std::string left = expression.substr(0, left_end);
            std::string right = expression.substr(right_start, expression.size() - right_start);

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