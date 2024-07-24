bool solveBoolean(string s) {
    bool result = true;
    for (char c : s) {
        if (c == 'f') {
            result = false;
        } else if (c == '&') {
            result = !result;
        } else if (c == '|') {
            return !result;
        }
    }
    return result;
}