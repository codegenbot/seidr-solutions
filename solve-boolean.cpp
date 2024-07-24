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
            size_t start_index = 0;
            for (int j = 0; j < i; j++) {
                if (expression[j] == '|') {
                    start_index = j + 1;
                    break;
                }
            }
            start_index += expression.substr(0, i).find_first_of("|&") + 1;

            std::string left = "";
            size_t end_index = expression.size() - 1;
            for (; end_index > i; end_index--) {
                if (expression[end_index] == '|') {
                    break;
                }
            }
            end_index -= expression.substr(i + 1, expression.size() - i - 1).find_last_of("|&");

            left = expression.substr(start_index, end_index - start_index);
            std::string right = expression.substr(end_index + 1);

            return solveBoolean(left) || solveBoolean(right);
        } else if (c == '&') {
            size_t start = 0;
            for (int j = i; j < expression.size(); j++) {
                if (expression[j] == '|' || expression[j] == '&') {
                    start = j + 1;
                    break;
                }
            }

            std::string left = "";
            size_t start_index = 0;
            for (int k = 0; k < i; k++) {
                if (expression[k] == '|') {
                    start_index = k + 1;
                    break;
                }
            }
            start_index += expression.substr(0, i).find_first_of("|&") + 1;

            size_t end = i + 1;
            for (; end < expression.size(); end++) {
                if (expression[end] == '|' || expression[end] == '&') {
                    break;
                }
            }

            left = expression.substr(start_index, end - start_index);
            right = expression.substr(end);

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