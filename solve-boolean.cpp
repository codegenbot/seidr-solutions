string solveBoolean(string s) {
    bool result = (s == "t");
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            result &= (s.substr(i+1) == "t");
            i++;
        } else if(s[i] == '|') {
            result |= (s.substr(i+1) == "t");
            i++;
        }
    }
    return result ? "True" : "False";
}