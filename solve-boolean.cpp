#include <string>
#include <iostream>

using namespace std;

bool solveBoolean(string s) {
    stack<char> s;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) return false;
        } else if (s[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) return true;
        } else {
            s.push(s[i]);
        }
    }
    
    while (!s.empty()) {
        s.pop();
    }
    
    return s.empty();
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False");
    return 0;
}