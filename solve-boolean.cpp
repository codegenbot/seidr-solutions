bool solveBoolean(string s) {
    bool result = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') {
            result = true;
        } else if (s[i] == 'f') {
            if (result) return false;
        } else if (s[i] == '|') {
            if (result) result = true;
            else result = false;
        } else if (s[i] == '&') {
            if (!result) return false;
        }
    }
    return result;
}