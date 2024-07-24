#include <iostream>
#include <string>

bool solveBoolean(std::string expression) {
    if(expression.empty())
        return false;
    else if(expression == "T" || expression == "t")
        return true;
    else if(expression == "F" || expression == "f")
        return false;

    char op = expression[0];
    int i = 1;
    for(; i < expression.size() && (expression[i] != 'T' && expression[i] != 't' && expression[i] != 'F' && expression[i] != 'f'); i++);
    
    std::string left = expression.substr(0, i);
    std::string right = expression.substr(i);

    return op == '&' ? solveBoolean(left) && solveBoolean(right) : solveBoolean(left) || solveBoolean(right);
}

int main() {
    std::cout << std::boolalpha;
    std::cout << solveBoolean("t|t|f&f|t|t") << std::endl;  // Should return true
    return 0;
}