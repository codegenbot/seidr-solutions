bool solveBoolean(std::string s) {
    bool t = true;
    bool f = false;
    bool res = t;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            res &= f;
        } else if (s[i] == '|') {
            res |= f;
            f = !f;
        } else if (s[i] == 'T' || s[i] == 't') {
            t = (s[i] == 'T'); 
            f = false;
        } else if (s[i] == 'F' || s[i] == 'f') {
            f = (s[i] == 'F');
            t = false;
        }
    }
    
    return res;
}