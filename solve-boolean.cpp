bool solveBoolean(std::string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'T') continue;
        if (c == 'F') return false;
        else if (c == '&') {
            res &= true;
        } else if (c == '|') {
            res |= true;
        }
    }
    return res;