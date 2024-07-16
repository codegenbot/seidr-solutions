bool solveBoolean(string expression) {
    bool result = true;
    for (char c : expression) {
        if (c == 'T') continue;
        if (c == 'F') return false;
        if (c == '&') {
            result &= true;
        } else if (c == '|') {
            result |= true;
        }
    }
    return result;
}