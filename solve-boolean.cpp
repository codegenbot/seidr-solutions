bool solveBoolean(const std::string& s) {
    bool result = true;
    int i = 0;

    while (i < s.length()) {
        if (s[i] == '&') {
            i++;
            while (i < s.length() && s[i] != '|') {
                if (s[i] != 'T') {
                    result = false;
                    break;
                }
                i++;
            }
        } else if (s[i] == '|') {
            i++;
            while (i < s.length() && s[i] != '&') {
                if (s[i] != 'T') {
                    result = true;
                    break;
                }
                i++;
            }
        } else {
            result = (s[i] == 'T');
            i++;
        }
    }

    return result;
}