Here is the solution:

string solveBoolean(string s) {
    bool res = (s == "t");
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            res &= (s.substr(0, i) == "t" || s.substr(i+1) == "t");
        }
        else if(s[i] == '|') {
            res |= (s.substr(0, i) == "t" || s.substr(i+1) == "t");
        }
    }
    return res ? "True" : "False";
}