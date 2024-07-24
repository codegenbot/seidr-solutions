bool solveBoolean(std::string s) {
    bool res = true;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'T') {
            return true;
        }
        if (s[i] == 'F') {
            return false;
        }
        if (s[i] == '|') {
            res = true;
        }
        if (s[i] == '&') {
            res = false;
        }
    }
    return res;