#include <iostream>
#include <string>

bool solveBoolean(std::string expression) {
    bool result = true;
    int i = 0;
    while (i < expression.size()) {
        if (expression[i] == 'T' || expression[i] == 't')
            return true;
        else if (expression[i] == 'F' || expression[i] == 'f')
            return false;
        else if (expression[i] == '|') {
            i++;
            result = (solveBoolean(expression.substr(i, expression.find('&', i) - i)) ||
                      solveBoolean(expression.substr(expression.find('&', i) + 1)));
            i = expression.size();
        }
        else if (expression[i] == '&') {
            int start = i;
            while (++i < expression.size() && expression[i] != '|' && expression[i] != '&');
            result = (solveBoolean(expression.substr(start, i - start)) &&
                      solveBoolean(expression.substr(i, expression.find('&', i) - i)));
            i = expression.size();
        }
    }
    return result;
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