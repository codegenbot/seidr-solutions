bool solveBoolean(std::string s) {
    bool result = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '&') {
            if (!result && i + 1 < s.length() && s[i + 1] == '&') {
                i++;
            }
        } else if (s[i] == '|') {
            if (!result && i + 1 < s.length() && s[i + 1] == '|') {
                i++;
            }
        }
        i++;
    }
    return result;
}