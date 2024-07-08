bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            continue;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '&') {
            result = false;
        } else if (s[i] == '|') {
            result = true;
        }
    }
    return result;
}