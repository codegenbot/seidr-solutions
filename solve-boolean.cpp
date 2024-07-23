#include <iostream>
#include <string>

bool solveBoolean(std::string expression) {
    if (expression.size() > 0) {
        char c = expression[0];
        if (c == 'T' || c == 't')
            return true;
        else if (c == 'F' || c == 'f')
            return false;
        else {
            expression.erase(0, 1);
            return solveBoolean(expression);
        }
    } else 
        return false; 

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