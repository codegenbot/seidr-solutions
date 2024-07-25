bool solveBoolean(string s) {
    bool result = true;
    for (char c : s) {
        if (c == 'T') continue;
        if (c == 'F') return false;
        if (c == '|') {
            result = !result;
        } else if (c == '&') {
            if (!result) return false;
        }
    }
    return result;
}