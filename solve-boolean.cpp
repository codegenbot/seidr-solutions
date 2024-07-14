#include <stack>

bool evaluateTop(std::stack<char>& st) {
    char c = st.top();
    st.pop();
    if (c == '&') {
        while (!st.empty()) {
            if (st.top() == 'T')
                return false;
            st.pop();
        }
        return true;
    } else if (c == '|') {
        while (!st.empty()) {
            st.pop();
        }
        return true;
    } else {
        return c == 'T';
    }
}