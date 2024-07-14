#include <stack>
#include <string>

bool evaluate(std::string expression) {
    bool result = true;
    std::stack<char> st;
    for (auto c : expression) {
        if (c == 'T') {
            return false; // Assuming false when encountering T
        } else if (c == 'F') {
            return false; // Assuming false when encountering F
        } else if (c == '|') {
            st.push(c);
        } else if (c == '&') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            }
            bool top = st.top() != '&' || !result; // Assuming evaluate function returns a boolean
            if (top) {
                st.push('|');
            } else {
                st.push('&');
            }
            result = top;
        }
    }
    return result;
}