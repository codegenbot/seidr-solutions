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
        cout << (solveBoolean(expression) ? "True" : "False");
    } catch(const std::invalid_argument& e) {
        std::cerr << "Error: Invalid input. Please enter a string." << std::endl;
    }
    return 0;
}