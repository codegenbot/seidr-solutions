bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            result &= (s[i + 1] == 'T');
            i++;
        } else if (s[i] == '|') {
            result |= (s[i + 1] == 'T');
            i++;
        }
    }
    return result;
}