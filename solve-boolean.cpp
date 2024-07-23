bool solveBoolean(string s) {
    bool boolResult;
    boolResult = (s == "T");
    for(int i=1; i<s.size(); i++) {
        if(s[i] == '&') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            boolResult &= (left == "T") | (right == "T");
        } else if(s[i] == '|') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            boolResult |= (left == "T") | (right == "T");
        }
    }
    return boolResult ? "True" : "False";
}