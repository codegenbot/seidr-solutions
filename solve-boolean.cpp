#include <stack>
#include <string>
#include <cctype>
#include <utility>

bool solveBoolean(std::string expression) {
    std::stack<char> st;
    for (char c : expression) {
        if (std::isalpha(c)) {
            st.push(c);
        } else if (c == '|') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            st.push(c);
        } else if (c == '&') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            st.push(c);
        }
    }
    return !st.empty();
}