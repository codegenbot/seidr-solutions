bool solveBoolean(string s) {
    bool t = true;
    bool f = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            return t && eval(s.substr(i+1));
        }
        else if (s[i] == '|') {
            return t || eval(s.substr(i+1));
        }
        else if (s[i] == 'T') {
            t = true;
        }
        else if (s[i] == 'F') {
            t = false;
        }
    }
    return t;
}

bool eval(string s) {
    bool res = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            res = true;
        }
        else if (s[i] == 'F') {
            res = false;
        }
        else if (s[i] == '&') {
            return res && eval(s.substr(i+1));
        }
        else if (s[i] == '|') {
            return res || eval(s.substr(i+1));
        }
    }
    return res;
}