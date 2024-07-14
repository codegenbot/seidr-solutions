bool solveBoolean(std::string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'T') continue;
        if (c == 'F') return false;
        else if (c == '&') {
            res &= false; // Changed to false
        } else if (c == '|') {
            res |= false; // Changed to false
        }
    }
    return res;
}