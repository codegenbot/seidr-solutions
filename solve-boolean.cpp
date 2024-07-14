#include <cctype>
#include <stack>
#include <string>

bool solveBoolean(std::string expression) {
    stack<char> st;
    for (char c : expression) {
        if (std::isalpha(c)) {
            st.push(c);
        } else if (c == '|') {
            while (!st.empty() && std::tolower(st.top()) == '&') {
                st.pop();
            }
            st.push(c);
        } else if (c == '&') {
            while (!st.empty() && std::tolower(st.top()) == '|') {
                st.pop();
            }
            st.push(c);
        }
    }
    return !st.empty();