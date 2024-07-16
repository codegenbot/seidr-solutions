bool solveBoolean(std::string& s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '|') {
            result = !result;
        } else if (s[i] == '&') {
            if (!result) return false;
        }
    }
    return result;