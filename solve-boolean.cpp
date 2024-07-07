bool solveBoolean(string s) {
    bool res = true;
    int i = 0;

    while (i < s.length()) {
        if (s[i] == 't') {
            i += (s[i + 1] == '&') ? 2 : 1;
            res = (s[i + 1] == '&') ? (res & true) : (res | true);
        } else if (s[i] == 'f') {
            i += (s[i + 1] == '&') ? 2 : 1;
            res = (s[i + 1] == '&') ? (res & false) : (res | false);
        } else if (s[i] == '|') {
            return s.substr(0, i).compare("t") == 0;
        }
    }

    return res;
}