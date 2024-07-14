string solveBoolean(string s) {
    bool result = (s == "t");
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '|') {
            result = result || ((i + 1) < s.length() && s.substr(i + 1, 1) == "t") ? true : false;
        } else if(s[i] == '&') {
            result = result && ((i + 1) < s.length() && s.substr(i + 1, 1) == "t") ? true : false;
        }
    }
    return result ? "True" : "False";
}