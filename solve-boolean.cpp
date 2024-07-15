#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solveBoolean(string str) {
    stack<char> s;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) return false;
        } else if (str[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) return true;
        } else {
            s.push(str[i]);
        }
    }
    
    while (!s.empty()) {
        s.pop();
    }
    
    return s.empty();
}

int main() {
    string str;
    cin >> str;
    cout << (solveBoolean(str) ? "True" : "False");
    return 0;
}