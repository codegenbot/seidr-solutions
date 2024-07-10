#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (char c : expression) {
        if (c == '&') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) return false;
        } else if (c == '|') {
            while (!s.empty()) s.pop();
        } else {
            s.push(c);
        }
    }
    return !s.empty();
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result) cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}