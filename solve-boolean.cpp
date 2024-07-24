#include <vector>
#include <iostream>
#include <string>

bool solveBoolean(std::string expression) {
    bool result = false;
    int i = 0;
    
    while(i < expression.length()) {
        if(expression[i] == 'T') {
            result = true;
            break;
        } else if(expression[i] == 'F') {
            result = false;
            break;
        } else if(expression[i] == '|') {
            i++;
            bool left = (expression[i] == 'T');
            while(i < expression.length() && expression[i] != '&') i++;
            i++; // skip &
            bool right = (expression[i] == 'T');
            result = (result || left) && (result || right);
        } else if(expression[i] == '&') {
            i++;
            bool left = (expression[i] == 'T');
            while(i < expression.length() && expression[i] != '|') i++;
            i++; // skip |
            bool right = (expression[i] == 'T');
            result = (result && left) || (result && right);
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a Boolean expression: ";
    std::getline(std::cin, input);
    bool output = solveBoolean(input);
    if(output)
        std::cout << "True\n";
    else
        std::cout << "False\n";
    
    return 0;
}