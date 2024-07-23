#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    for (int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        if (c == '|') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);
            return solveBoolean(left) || solveBoolean(right);
        } else if (c == '&') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);
            return solveBoolean(left) && solveBoolean(right);
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