string solveBoolean(string s) {
    if (s == "t") return "True";
    else if (s == "f") return "False";
    else if (s.length() > 1) {
        bool res = (s[0] == 'T');
        for(int i=1; i<s.length(); i++) {
            if(s[i]=='|') res = !res;
            else if(s[i]&1) res = !res;
        }
        return res ? "True" : "False";
    } else return "Invalid input";
}