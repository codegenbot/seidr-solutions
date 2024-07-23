bool solveBoolean(string s) {
    bool boolResult;
    if (s == "t") {
        boolResult = true;
    } else if (s == "f") {
        boolResult = false;
    } else {
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '&') {
                string left = s.substr(0, i);
                string right = s.substr(i+1);
                boolResult &= (left == "t");
                boolResult &= (right == "f") | (right == "t");
            } else if(s[i] == '|') {
                string left = s.substr(0, i);
                string right = s.substr(i+1);
                boolResult |= (left == "t");
                boolResult |= (right == "t");
            }
        }
    }
    return boolResult ? "True" : "False";
}