#include <iostream>
#include <string>

bool evaluateBooleanExpression(const std::string& expression) {
    bool result = false;
    bool lastOperand = false;
    char operation = '|';

    for (char c : expression) {
        if (c == 't') {
            lastOperand = true;
        } else if (c == 'f') {
            lastOperand = false;
        } else if (c == '|' || c == '&') {
            operation = c;
        } else {
            continue;
        }

        if (operation == '&') {
            result = result && lastOperand;
        } else {
            result = result || lastOperand;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    
    bool result = evaluateBooleanExpression(input);

    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    
    return 0;
}