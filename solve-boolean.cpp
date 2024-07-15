bool solveBoolean(std::string s) {
    bool res = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'T') res = true;
        else if (s[i] == 'F') return res;
        else if (s[i] == '&') {
            bool temp = res;
            res = false;
        }
        else if (s[i] == '|') {
            bool temp = res;
            res = !temp;
        }
    }
    return res;