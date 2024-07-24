bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            if (!result) return false;
            result = false;
        } else if (s[i] == '|') {
            result = !result;
        } else if (s[i] == 't' || s[i] == 'f') {
            result = (s[i] == 't');
        }
    }
    return result;