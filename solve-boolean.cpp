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
            size_t start = 0;
            while (start < i) {
                start++;
            }
            std::string left = expression.substr(0, i - start);
            size_t end = expression.size();
            while (end > i) {
                end--;
            }
            std::string right = expression.substr(i + 1, end - i);
            return solveBoolean(left) || solveBoolean(right);
        } else if (c == '&') {
            int j = i;
            while (j < expression.size() && expression[j] != '|' && expression[j] != '&') 
                j++;
            size_t start = 0;
            while (start < i) {
                start++;
            }
            std::string left = expression.substr(0, i - start);
            size_t end = expression.size();
            while (end > i) {
                end--;
            }
            size_t m = i + 1;
            while (m < j) {
                m++;
            }
            std::string right = expression.substr(i + 1, j - i);
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