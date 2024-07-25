bool solveBoolean(string s) {
    bool result = true;
    for (char c : s) {
        if (c == 'F') return false;
        if (c == '&') {
            result &= true;
        } else if (c == '|') {
            result |= true;
        }
    }
    return result;
}