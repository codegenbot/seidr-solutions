bool solveBoolean(std::string s) {
    bool res = true;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'T') {
            return true;
        }
        if (s[i] == 'F') {
            return false;
        }
        if (s[i] == '|') {
            res = true;
        }
        else if (s[i] == '&') {
            res = false;
        }
    }
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'T' || s[i] == 'F') {
            bool temp = (s[i] == 'T');
            while (i + 1 < s.size() && (s[i + 1] == '|' || s[i + 1] == '&')) {
                ++i;
            }
            if (s[i] != '(') {
                res = temp;
            } else {
                i++;
                while (i < s.size() && s[i] != ')') {
                    i++;
                }
                if (s[i] == ')') {
                    i++;
                }
            }
        }
    }
    return res;
}