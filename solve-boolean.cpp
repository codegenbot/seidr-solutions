#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
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
        } else if (expression[i] != 'T' && expression[i] != 'F') {
            return false;
        } else {
            s.push(expression[i]);
        }
    }
    return s.top() == 'T';
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    cin >> input;
    if (solveBoolean(input)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}