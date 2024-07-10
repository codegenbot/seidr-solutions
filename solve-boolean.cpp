#include <iostream>
#include <string>

bool evaluate(char op, bool operand1, bool operand2) {
    if (op == '|') {
        return operand1 || operand2;
    } else {
        return operand1 && operand2;
    }
}

int main() {
    std::string s;
    std::cin >> s;

    bool result = false;
    char op = '|'; 
    bool operand = false;
    
    for (char c : s) {
        if (c == 'T' || c == 'F') {
            operand = (c == 'T');
            result = evaluate(op, result, operand);
        } else if (c == '|' || c == '&') {
            op = c;
        }
    }

    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}