#include <stack>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

std::string solveBoolean(string s) {
    stack<char> st;
    bool value = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            value = true;
        } else if (s[i] == 'F') {
            value = false;
        } else if (s[i] == '&') {
            while (!st.empty() && st.top() != '|') {
                if (value) return "False";
                if (st.top() == 'T') value = true; else value = false;
                st.pop();
            }
        } else if (s[i] == '|') {
            while (!st.empty()) st.pop();
            st.push(s[i]);
        } else {
            st.push(s[i]);
        }
    }
    return value ? "True" : "False";
}