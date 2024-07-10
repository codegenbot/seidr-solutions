bool solveBoolean(string s) {
    if(s == "T") return true;
    if(s == "F") return false;

    bool res = true;
    int i = 0;
    while(i < s.length()) {
        if(s[i] == '&') {
            if(res || !eval(s.substr(i+1))) res = false;
            i += 2;
        } else if(s[i] == '|') {
            if(!res || eval(s.substr(i+1))) res = true;
            i += 2;
        } else {
            res = s[i] == 'T';
            i++;
        }
    }

    return res;

}

bool eval(string s) {
    if(s[0] == 'F') return false;
    if(s[0] == 'T') return true;

    int i = 1;
    while(i < s.length()) {
        if(s[i] == '&') {
            return !eval(s.substr(0, i)) && eval(s.substr(i+1));
        } else if(s[i] == '|') {
            return eval(s.substr(0, i)) || eval(s.substr(i+1));
        }
    }

    return s[0] == 'T';
}