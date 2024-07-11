int solveBoolean(string s) {
    if (s == "t") {
        return true;
    } else if (s == "f") {
        return false;
    } else {
        bool op1 = solveBoolean(s.substr(0, s.size() - 2));
        bool op2 = solveBoolean(s.substr(s.size() - 1, 1));
        if (s[s.size() - 2] == '|') {
            return op1 || op2;
        } else {
            return op1 && op2;
        }
    }
}