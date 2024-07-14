bool solveBoolean(string s) {
    bool res = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            res = true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '|') {
            bool temp = res;
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == 'T') {
                    res = true;
                } else if (s[j] == 'F') {
                    return false;
                }
                i = j - 1;
                break;
            }
            if (!res) {
                res = temp;
            }
        } else if (s[i] == '&') {
            bool temp = res;
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == 'T' && res) {
                    continue;
                } else if (s[j] == 'F') {
                    return false;
                }
                i = j - 1;
                break;
            }
            if (!res) {
                res = temp;
            }
        }
    }
    return res;
}