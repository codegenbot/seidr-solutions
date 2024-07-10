#include <iostream>
#include <string>

bool evaluate(char op, bool operand1, bool operand2) {
    if (op == '|') {
        return operand1 || operand2;
    } else if (op == '&') {
        return operand1 && operand2;
    } else {
        // Handle cases where op is not recognized, return false by default
        return false;
    }
}

int main() {
    std::string s;
    std::cin >> s;

    bool result = true;
    char op = '&'; 
    bool operand = true;
    
    for (char c : s) {
        if (c == 'T' || c == 'F') {
            operand = (c == 'T');
        } else if (c == '|' || c == '&') {
            op = c;
        } else {
            result = evaluate(op, result, operand);
        }
    }

    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}