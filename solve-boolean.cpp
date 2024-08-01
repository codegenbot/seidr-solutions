Here is the solution:

bool solveBoolean(string input) {
    if (input == "T") return true;
    if (input == "F") return false;
    
    stack<char> st;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '&') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            st.push('&');
        } else if (input[i] == '|') {
            while (!st.empty()) {
                st.pop();
            }
            st.push('|');
        } else {
            st.push(input[i]);
        }
    }
    
    bool result = true;
    char op = '0';
    while (!st.empty()) {
        char c = st.top(); st.pop();
        if (c == '&') {
            op = '&';
        } else if (c == '|') {
            if (op == '&' || op == '0') {
                result = false;
            }
            op = '0';
        } else if (c == 'F' && op == '&') {
            result = false;
            break;
        } else if (c == 'T' && op == '|') {
            break;
        }
    }
    
    return result;
}