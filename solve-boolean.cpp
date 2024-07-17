bool solveBoolean(string s) {
    if (s == "T" || s == "true") return true;
    if (s == "F" || s == "false") return false;
    
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '&') {
            string left = s.substr(0, i);
            string right = s.substr(i + 1);
            return solveBoolean(left) && solveBoolean(right);
        }
        else if (s[i] == '|') {
            string left = s.substr(0, i);
            string right = s.substr(i + 1);
            return solveBoolean(left) || solveBoolean(right);
        }
    }
    
    return false;
}