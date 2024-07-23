bool solveBoolean(string s) {
    bool result = true;
    bool lastOp = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '|') {
            lastOp = true;
        } else if (s[i] == '&') {
            if (lastOp) {
                return false;  // Last operation was OR, so current AND returns false
            }
            lastOp = true;
        }
    }

    return result && lastOp;  // Apply the final operator
}