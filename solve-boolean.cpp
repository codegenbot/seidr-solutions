```cpp
#include <string>
#include <iostream>

int main() {
    std::string expression;
    
    std::cout << "Enter a Boolean expression (T/F/|/&): ";
    std::cin >> expression;

    bool result = evaluateTop(expression);

    if (result)
        std::cout << "The result is TRUE." << std::endl;
    else
        std::cout << "The result is FALSE." << std::endl;

    return 0;
}

bool evaluateTop(std::string &expression) {
    int i = expression.size() - 1;
    bool orResult = true;
    bool andResult = false;

    while (i >= 0) {
        if (expression[i] == ')') {
            // pop ')' and '(' from stack until '(' is found
            while (expression[i] != '(') {
                if (expression[i] == '|') {
                    orResult = true;
                } else if (expression[i] == '&') {
                    andResult = false;
                }
                i--;
            }
            // pop '(' from stack
            i--;
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            if (expression[i] == 'T')
                orResult = true;
            else
                andResult = false;
        } else if (expression[i] == '|') {
            // reset orResult for OR operation
            orResult = true;
        } else if (expression[i] == '&') {
            // reset andResult for AND operation
            andResult = true;
        }
    }

    return orResult;
}