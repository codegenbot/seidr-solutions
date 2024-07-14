```bool solveBoolean(std::string s) {
    bool res = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '|') {
            i++;
            if (s[i] == 'T')
                return true;
            else
                i--;
        }
        else if (s[i] == '&') {
            i++;
            if (s[i] == 'F')
                return false;
            else
                i--;
        }
    }
    return res;
}```