string solveBoolean(string s) {
    bool result = false;
    for (char c : s) {
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            return "False";
        } else if (c == '|') {
            return (result ? "True" : "False");
        } else if (c == '&') {
            if (!result) return "False";
        }
    }
    return result ? "True" : "False";
}