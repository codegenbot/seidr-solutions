string solveBoolean(string s) {
    bool result = (s == "t");
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            if(result && s.substr(i+1, 1) == "f")
                return "False";
            else if (!result && s.substr(i+1, 1) == "t")
                return "False";
            i = s.length();
        }
        else if(s[i] == '|') {
            if(!result && s.substr(i+1, 1) == "f")
                return "False";
            else if (result && s.substr(i+1, 1) == "t")
                return "False";
            i = s.length();
        }
    }
    return result ? "True" : "False";
}