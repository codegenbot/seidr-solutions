string solveBoolean(string s) {
    if (s == "T") return "True";
    if (s == "F") return "False";
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c == '|') {
            string t = s.substr(0, i);
            string f = s.substr(i + 1);
            return t + ((t == "T" && f == "F") || (t == "F" && f == "T")) ? "True" : "False";
        } else if (c == '&') {
            string t = s.substr(0, i);
            string f = s.substr(i + 1);
            return t + ((t == "T" && f == "T") || (t == "F" && f == "F")) ? "True" : "False";
        }
    }
    return s;
}