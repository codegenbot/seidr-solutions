bool solveBoolean(std::string s) {
    bool res = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '&') {
            i++;
            bool a = s[i] == 'T';
            i++;
            bool b = s[i] == 'T';
            i++;
            res &= (a && b);
        } else if (s[i] == '|') {
            i++;
            bool a = s[i] == 'T';
            i++;
            bool b = s[i] == 'T';
            i++;
            res |= (a || b);
        } else {
            i++;
            res = s[i] == 'T';
        }
    }
    return res;
}