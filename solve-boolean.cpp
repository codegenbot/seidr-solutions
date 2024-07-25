#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            while (!s.empty() && s.top() != '&') {
                s.pop();
            }
            if (s.empty()) {
                return true;
            } else {
                s.pop();
                return false;
            }
        } else if (expression[i] == '&') {
            s.push('&');
        } else {
            while (!s.empty() && s.top() != '|') {
                s.pop();
            }
            if (s.empty()) {
                return expression[i] == 'T';
            } else {
                s.pop();
                return expression[i] == 'T';
            }
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    return true;
}

int main() {
    string expression;
    cin >> expression;
    cout << (solveBoolean(expression) ? "True" : "False");
    return 0;
}