bool solveBoolean(std::string expression) {
    std::stack<char> st;
    for (char c : expression) {
        if (std::isalpha(c)) {
            st.push(c);
        } else {
            while (!st.empty() && st.top() != '(') { 
                char op = st.top();
                if (op == '|') {
                    if (c == '&') {
                        st.pop();  
                    }
                } else if (op == '&') {
                    if (c == '|') {
                        st.pop();  
                    }
                }
                st.pop();  
            }
            st.push(c);  
        }
    }
    return !st.empty();
}