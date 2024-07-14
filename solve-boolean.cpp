#include <stack>
#include <string>

bool evaluateTop(std::stack<char>& st) {
    char c = st.top();
    st.pop();
    if (c == '&') {
        while (!st.empty() && st.top() != '|') {
            st.pop();
        }
        bool top = st.empty();
        st.push(c);
        return top;
    } else if (c == '|') {
        while (!st.empty()) {
            st.pop();
        }
        return true;
    } else {
        return false;
    }
}

bool evaluate(std::stack<char> st, std::string expression) {
    bool result = true;
    for (char c : expression) {
        if (c == 'T') {
            result = false;
            break;
        } else if (c == 'F') {
            result = false;
            break;
        } else if (c == '|') {
            st.push(c);
            result = true;
        } else if (c == '&') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            }
            bool top = evaluateTop(st);
            if (top) {
                st.push('&');
            } else {
                st.push('|');
            }
        }
    }
    return result;
}