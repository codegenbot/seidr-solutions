bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'F') {
            res = false;
            break;
        }
        else if (c == '&') {
            res &= true;
        }
        else if (c == '|') {
            res |= true;
        }
    }
    return res;
}