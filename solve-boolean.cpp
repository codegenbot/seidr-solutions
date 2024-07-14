bool result = true;
    std::stack<char> st;
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
            bool top = evaluate(st.top());
            if (top) {
                st.push('&');
            } else {
                st.push('|');
            }
        }
    }
    return result;
}