bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'T') continue;
        if (c == 'F') return false;
        else if (c == '&') {
            res &= false;
        } else if (c == '|') {
            res |= false;
        }
    }
    return res;
}