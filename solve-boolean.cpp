bool solveBoolean(string s) {
    bool result = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            return result;
        } else if (s[i] == '|') {
            result = true;
        } else if (s[i] == 't') {
            result = true;
        } else if (s[i] == 'f') {
            return false;
        }
    }
    return result;
}