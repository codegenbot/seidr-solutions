#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
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
    string expression;
    cout << "Enter the Boolean expression: ";
    cin >> expression; // Declare and initialize before using
    cout << (solveBoolean(expression) ? "True" : "False");
    return 0;