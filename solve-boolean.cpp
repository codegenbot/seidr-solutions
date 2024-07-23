Here is the modified code:

bool solveBoolean(string s) {
    bool boolResult;
    boolResult = (s == "t");
    for(int i=1; i<s.size(); i++) {
        if(s[i] == '&') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            boolResult &= (left == "t") | (right == "t");
        } else if(s[i] == '|') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            boolResult |= (left == "t") | (right == "t");
        }
    }
    return boolResult ? "True" : "False";
}