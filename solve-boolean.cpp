```cpp
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
    try {
        std::cin >> expression; 
        if (expression.length() < 1 || expression.length() > 100) {
            throw string("Invalid input. Please enter a Boolean expression with 1-100 characters.");
        }
        for (char c : expression) {
            if (!(c == 'T' || c == 'F' || c == '&' || c == '|')) {
                throw string("Invalid input. The only allowed characters are T, F, &, and |");
            }
        }
        std::cout << (solveBoolean(expression) ? "True" : "False"); 
    } catch (string e) {
        std::cerr << e << std::endl;
        return 1; 
    }
    return 0;
}