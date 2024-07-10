bool solveBoolean(string s) {
    bool result = true;
    for (char c : s) {
        if (c == 'F') {
            result = false;
            break;
        } else if (c == '&') {
            result &= true;
        } else if (c == '|') {
            result |= true;
        }
    }
    return result;
}