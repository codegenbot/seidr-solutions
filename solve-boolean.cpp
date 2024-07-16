bool solveBoolean(std::string s) {
    bool result = true;
    for (char c : s) {
        if (c == '&') {
            result &= st.empty() || top == '&';
        } else if (c == '|') {
            result |= !st.empty() || top == '|';
        } else if (c != 'T' && c != 'F') {
            return false;
        } else {
            top = c;
        }
    }
    return result;
}