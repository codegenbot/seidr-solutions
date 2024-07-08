string solveBoolean(string s) {
    bool result = true;
    for (char c : s) {
        if (c == 'F') {
            result = false;
            break;
        } else if (c == '&') {
            continue;
        } else if (c == '|') {
            return "True";
        }
    }
    return result ? "True" : "False";
}