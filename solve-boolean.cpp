bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'f') {
            result = false;
            break;
        }
        else if (s[i] == '&') {
            if (!result) return false;
        }
        else if (s[i] == '|') {
            if (result) return true;
        }
    }
    return result;
}