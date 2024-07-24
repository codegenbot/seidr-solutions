#include <iostream>
#include <string>

bool evaluateBoolean(const std::string& expression) {
    bool result = false;
    for (char c : expression) {
        switch (c) {
            case 'T':
                return true;
            case 'F':
                return false;
            case '|': {
                bool first = evaluateBoolean(expression.substr(0, expression.find(c)));
                bool second = evaluateBoolean(expression.substr(expression.find(c) + 1));
                return result || second;
            }
            case '&': {
                bool first = evaluateBoolean(expression.substr(0, expression.find(c)));
                bool second = evaluateBoolean(expression.substr(expression.find(c) + 1));
                return result && second;
            }
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a Boolean expression (e.g., 't', 'f', 'f&f'): ";
    std::getline(std::cin, input);
    bool output = evaluateBoolean(input);
    if (output) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}