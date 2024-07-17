#include <iostream>
using namespace std;

bool solveBoolean(string s) {
    stack<char> op;
    stack<bool> val;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T' || s[i] == 't') {
            val.push(true);
        } else if (s[i] == 'F' || s[i] == 'f') {
            val.push(false);
        } else if (s[i] == '|') {
            bool b = val.top();
            val.pop();
            while (!op.empty() && op.top() != '&') {
                bool a = val.top();
                val.pop();
                op.pop();
                val.push(a || b);
            }
            if (!op.empty()) {
                op.pop();
                val.push(val.top() && !val.top());
                val.pop();
            }
        } else if (s[i] == '&') {
            op.push('&');
        }
    }

    return val.top();
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False");
    return 0;
}