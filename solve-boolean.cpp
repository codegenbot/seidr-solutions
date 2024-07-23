bool solveBoolean(string s) {
    if (s.length() == 0)
        return false;

    bool result;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T')
            return true;
        else if (s[i] == 'F')
            return false;

        int j = i + 1;
        while (j <= s.length() && (s[j] == '|' || s[j] == '&'))
            j++;

        string opStr = s.substr(i, j - i);
        i = j - 1;

        if (opStr[0] == '|') {
            for (; i >= 0; i--) {
                if (s[i] == 'T')
                    return true;
                else if (s[i] == 'F')
                    return false;
            }
            return true;
        } else {
            for (; i >= 0; i--) {
                if (s[i] == 'T' && opStr[1] != '|')
                    return true;
                else if (s[i] == 'F' && opStr[1] != '&')
                    return false;
            }
            return false;
        }
    }

    return false;
}