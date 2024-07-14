string solveBoolean(string s) {
    bool res = (s[0] == 'T');
    for(int i=1; i<s.size(); i++) {
        if(s[i] == '&') {
            res &= (s[i-1] == 'T');
        } else if(s[i] == '|') {
            res |= (s[i-1] == 'T');
        }
    }
    return res ? "True" : "False";
}