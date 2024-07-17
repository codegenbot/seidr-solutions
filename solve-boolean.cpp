string solveBoolean(string s) {
    bool res = (s == "t");
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            res &= (s.substr(i+1, 1) == "t");
            i++;
        }
        else if(s[i] == '|') {
            res |= (s.substr(i+1, 1) == "t");
            i++;
        }
    }
    return res ? "True" : "False";
}