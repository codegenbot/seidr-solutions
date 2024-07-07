#include <stack>
#include <string>

string solveBoolean(string input) {
    stack<char> s;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            s.push('&');
        } else if (input[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
            s.push('|');
        } else if (input[i] == 't' || input[i] == 'f') {
            s.push(input[i]);
        }
    }

    string result = "";
    while (!s.empty()) {
        result += s.top();
        s.pop();
    }

    return result == "t" ? "True" : "False";