#include <iostream>
#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    std::stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            st.push('&');
        } else if (s[i] == '|') {
            while (!st.empty()) {
                st.pop();
            }
            st.push('|');
        } else {
            st.push(s[i]);
        }
    }
    return st.top() == 'T';
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << (solveBoolean(s) ? "True" : "False");
    return 0;
}