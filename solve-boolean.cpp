#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            while (!s.empty() && s.top() != '&') {
                s.pop();
            }
            if (s.empty()) return true;
        } else if (expression[i] == '&') {
            s.push('&');
        } else if (expression[i] == 't' || expression[i] == 'T') {
            while (!s.empty() && s.top() != '|') {
                s.pop();
            }
            if (s.empty()) return true;
        } else if (expression[i] == 'f' || expression[i] == 'F') {
            while (!s.empty()) {
                s.pop();
            }
            return false;
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a Boolean expression (T/F/|/&): ";
    cin >> input;
    bool result = solveBoolean(input);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}