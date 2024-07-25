bool solveBoolean(string s) {
    bool result = false;
    int i = 0;
    
    while (i < s.size()) {
        if (s[i] == 't') {
            return true;
        } else if (s[i] == 'f') {
            return false;
        } else if (s[i] == '|') {
            result = true;
            i++;
        } else if (s[i] == '&') {
            i++;
        }
    }
    
    return result;
}