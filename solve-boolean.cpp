string solveBoolean(string s) {
    bool res = (s == "t");
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            res &= (s.substr(0, i) == "t");
            s = s.substr(i+1);
        } else if(s[i] == '|') {
            res |= (s.substr(0, i) == "t");
            s = s.substr(i+1);
        }
    }
    return res ? "True" : "False";
}