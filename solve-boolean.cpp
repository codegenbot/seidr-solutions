string solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'F') {
            result = false;
            break;
        } else if (s[i] == '&') {
            result &= true;
        } else if (s[i] == '|') {
            result |= true;
        }
    }
    return result ? "True" : "False";
}