Here is the solution:

string solveBoolean(string s) {
    bool result = (s == "t");
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '&') {
            result &= (s.substr(i+1, 1) == "t");
        } else if(s[i] == '|') {
            result |= (s.substr(i+1, 1) == "t");
        }
    }
    return result ? "True" : "False";
}