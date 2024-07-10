string solveBoolean(string s) {
    bool result = false;
    for (char c : s) {
        if (c == 't') {
            result = true;
        } else if (c == 'f') {
            return "False";
        } else if (c == '|') {
            return (result ? "True" : "False");
        } else if (c == '&') {
            return (result ? "True" : "False");
        }
    }
    return result ? "True" : "False";
}