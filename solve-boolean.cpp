#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    bool prevOp = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return false;
            prevOp = true;
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return true;
            prevOp = false;
        } else {
            st.push(s[i]);
        }
    }
    return !st.empty() || prevOp;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}