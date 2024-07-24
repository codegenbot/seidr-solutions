#include <iostream>
#include <stack>
#include <string>

bool solveBoolean(std::string expression); 

bool solveBoolean(std::string expression) {
    bool result = false; 
    stack<char> s;
    
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
    if (!(std::cin >> expression)) {
        std::cerr << "Invalid input. Please enter a valid Boolean expression." << std::endl;
        return 1;
    }
    std::cout << (solveBoolean(expression) ? "True" : "False") << std::endl;
    return 0;
}