Here is the solution:

bool solveBoolean(string s) {
    bool result = true;
    int i = 0;

    while (i < s.size()) {
        if (s[i] == 'T') {
            return true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '&') {
            i++;
            bool left = solveBoolean(s.substr(i));
            i += 1;
            while (i < s.size() && s[i] != '&') {
                i++;
            }
            result &= left;
        } else if (s[i] == '|') {
            i++;
            bool left = solveBoolean(s.substr(i));
            i += 1;
            while (i < s.size() && s[i] != '|') {
                i++;
            }
            result |= left;
        }
    }

    return result;
}