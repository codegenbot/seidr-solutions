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
            while(i+1 < s.size() && s[i+1] != '&') {
                i++;
            }
        }
        else if (s[i] == '&') {
            while(i+1 < s.size() && s[i+1] != '|') {
                i++;
            }
        }
    }
    return res;
}