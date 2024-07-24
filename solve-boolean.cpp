string solveBoolean(string s) {
    bool result = (s == "t");
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            if(result) {
                result = (s.substr(i+1) == "t");
            }
            else {
                result = (s.substr(i+1) != "f");
            }
            i = s.length();
        }
        else if(s[i] == '|') {
            if(result) {
                result = true;
            }
            else {
                result = (s.substr(i+1) != "f");
            }
            i = s.length();
        }
    }
    return result ? "True" : "False";
}