bool solveBoolean(string s) {
    if (s == "T") return true;
    if (s == "F") return false;
    if (s.size() > 1) {
        bool res = solveBoolean(s.substr(0, s.find('&')));
        for (int i = s.find('&') + 1; i < s.size(); ++i) {
            res &= solveBoolean(s.substr(i));
        }
        return res;
    } else if (s.size() > 1) {
        bool res = solveBoolean(s.substr(0, s.find('|')));
        for (int i = s.find('|') + 1; i < s.size(); ++i) {
            res |= solveBoolean(s.substr(i));
        }
        return res;
    } else {
        return s == "T";
    }
}