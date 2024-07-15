#include <stack>
#include <string>
#include <iostream>

using namespace std;

bool solveBoolean(string s) {
    stack<char> sStack;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!sStack.empty() && sStack.top() == '&') {
                sStack.pop();
            }
            if (sStack.empty()) return false;
        } else if (s[i] == '|') {
            while (!sStack.empty() && sStack.top() == '|') {
                sStack.pop();
            }
            if (sStack.empty()) return true;
        } else {
            sStack.push(s[i]);
        }
    }
    
    while (!sStack.empty()) {
        sStack.pop();
    }
    
    return !sStack.empty();
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False");
    return 0;
}