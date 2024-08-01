bool solveBoolean(string s) {
    if (s == "T" || s == "t") return true;
    if (s == "F" || s == "f") return false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            string a = s.substr(0, i);
            string b = s.substr(i + 1);
            return solveBoolean(a) && solveBoolean(b);
        }
        else if (s[i] == '|') {
            string a = s.substr(0, i);
            string b = s.substr(i + 1);
            return solveBoolean(a) || solveBoolean(b);
        }
    }
    return true;
}