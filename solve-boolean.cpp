#include <iostream>
#include <stack>
#include <string>

bool solveBoolean(std::string expression); 

bool solveBoolean(std::string expression) {
    bool result = false; 
    std::stack<char> s;
    
    for (int i = 0; i < expression.length(); ++i) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            s.push('&');
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
            s.push('|');
        } else {
            s.push(expression[i]);
        }
    }
    
    result = s.top() == 'T'; 
    return result;
}

int main() {
    std::string expression;
    std::cin >> expression; // Use qualified cin
    if (expression.length() > 3 || expression.find('|') == std::string::npos || expression.find('&') == std::string::npos) {
        std::cout << "Invalid input. Please enter a string with T, F, |, and &." << std::endl;
    } else {
        std::cout << (solveBoolean(expression) ? "True" : "False"); // Use qualified cout
    }
    return 0;
}