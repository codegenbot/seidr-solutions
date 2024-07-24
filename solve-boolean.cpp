#include <stack>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

std::stack<char> s;
bool solveBoolean(string expression) {
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
    
    return s.top() == 'T';
}

int main() {
    string expression;
    cin >> expression;
    cout << (solveBoolean(expression) ? "True" : "False");
    return 0;
}