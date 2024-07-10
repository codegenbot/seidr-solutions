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
    char op = '&'; 
    bool operand = true;
    
    for (char c : s) {
        if (c == 'T' || c == 'F') {
            operand = (c == 'T');
        } else if (c == '|') {
            op = c;
        } else if (c == '&') {
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