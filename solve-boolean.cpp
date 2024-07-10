#include <iostream>
#include <string>
#include <stack>

bool evaluateBooleanExpression(const std::string& exp) {
    std::stack<bool> s;
    
    for (char c : exp) {
        if (c == 'T') {
            s.push(true);
        } else if (c == 'F') {
            s.push(false);
        } else if (c == '&') {
            bool op2 = s.top();
            s.pop();
            bool op1 = s.top();
            s.pop();
            s.push(op1 && op2);
        } else if (c == '|') {
            bool op2 = s.top();
            s.pop();
            bool op1 = s.top();
            s.pop();
            s.push(op1 || op2);
        }
    }
    
    return s.top();
}

int main() {
    std::string s;
    std::cin >> s;
    
    bool result = evaluateBooleanExpression(s);
    std::cout << (result ? "True" : "False") << std::endl;
    
    return 0;
}