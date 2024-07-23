bool solveBoolean(string s) {
    bool boolResult;
    if(s == "T") boolResult = true;
    else boolResult = false;

    for(int i=1; i<s.size(); i++) {
        if(s[i] == '&') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            boolResult &= (left == "T");
        } else if(s[i] == '|') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            boolResult |= (left == "T") | (right == "T");
        }
    }
    return boolResult ? "True" : "False";
}