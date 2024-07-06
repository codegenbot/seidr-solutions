bool solveBoolean(string s) {
    bool t = true;
    bool f = false;
    bool res = t;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            res &= f;
        } else if (s[i] == '|') {
            res |= f;
            f = !f;
        } else if (s[i] == 't') {
            t = true;
            f = false;
        } else if (s[i] == 'f') {
            t = false;
            f = true;
        } 
    }
    
    return res;
}