#include <vector>
#include <iostream>
#include <string>

bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            }
            st.pop();
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                return true;
            }
            st.pop();
        } else {
            st.push(s[i]);
        }
    }
    return st.size() > 0 ? st.top() == 'T' : false;
}

int main() {
    string s;
    while (cin >> s) {
        if (s == "t") {
            cout << "True" << endl;
        } else if (s == "f") {
            cout << "False" << endl;
        } else {
            cout << (solveBoolean(s) ? "True" : "False") << endl;
        }
    }
    return 0;
}