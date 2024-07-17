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
            if (st.empty()) return false;
            else st.pop();
        } 
        else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return true;
            else st.pop();
        } 
        else if (s[i] == 'T' || s[i] == 't') st.push('T');
        else if (s[i] == 'F' || s[i] == 'f') st.push('F');
    }
    return !st.empty();
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False");
    return 0;
}