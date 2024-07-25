bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'T') continue;
        if (c == 'F') return false;
        if (c == '|') {
            res = !res;
        } else if (c == '&') {
            if (!res) return false;
        }
    }
    return res;
}