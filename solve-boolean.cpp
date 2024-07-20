bool solveBoolean(string s) {
    bool result = true;
    for (char c : s) {
        if (c == 'F') {
            result = false;
        } else if (c == '&') {
            if (!result) return false;
        } else if (c == '|') {
            int i = 0;
            while (i < s.size() && (s[i] == '&' || s[i] == '|')) {
                ++i;
            }
            if (s[i] == 'F') result = false;
            else i++;
            while (i < s.size() && (s[i] == '&' || s[i] == '|')) {
                ++i;
            }
        }
    }
    return result;
}