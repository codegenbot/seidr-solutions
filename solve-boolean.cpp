```cpp
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
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
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            while (!s.empty()) {
                s.pop();
            }
            s.push(expression[i]);
        }
    }
    
    bool result = false;
    if (!s.empty() && s.top() == 'T')
        result = true;
    
    return result;
}

int main() {
    string expression;
    cin >> expression;
    cout << (solveBoolean(expression) ? "True" : "False");
    return 0;
}