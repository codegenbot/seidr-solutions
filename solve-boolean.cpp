#include <vector>
#include <iostream>
#include <string>

bool solveBoolean(string booleanExp) {
    stack<char> s;
    
    for (int i = 0; i < booleanExp.length(); i++) {
        if (booleanExp[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (!s.empty() && s.top() == '|') {
                s.pop();
                return false;
            } else if (!s.empty()) {
                s.pop();
                return true;
            } else {
                return false;
            }
        } else if (booleanExp[i] != '&' && booleanExp[i] != '|') {
            s.push(booleanExp[i]);
        }
    }

    while (!s.empty()) {
        s.pop();
    }

    return true;
}

int main() {
    string booleanExp;
    cin >> booleanExp;
    cout << (solveBoolean(booleanExp) ? "True" : "False") << endl;
    return 0;
}