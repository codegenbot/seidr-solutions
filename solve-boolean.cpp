bool solveBoolean(string s) {
    bool result = false;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '&') {
            for (int j = i + 1; j < s.size() && s[j] != '&'; ++j) {
                if (s[j] == 'T')
                    i = j;
                else
                    return false;
            }
        } else if (s[i] == '|') {
            for (int j = i + 1; j < s.size() && s[j] != '|'; ++j) {
                if (s[j] == 'T')
                    return true;
                else
                    return false;
            }
        }
    }
    return result;
}