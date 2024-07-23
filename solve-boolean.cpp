string solveBoolean(string s) {
    bool boolResult;
    if(s == "t") {
        boolResult = true;
    } else if(s == "f") {
        boolResult = false;
    }
    for(int i=1; i<s.size(); i++) {
        if(s[i] == '&') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            boolResult &= (left == "t");
            boolResult |= (right == "t");
        } else if(s[i] == '|') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            boolResult &= (left == "t") | boolResult;
            boolResult |= (right == "t") | boolResult;
        }
    }
    return boolResult ? "True" : "False";
}