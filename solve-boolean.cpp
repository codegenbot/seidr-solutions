string solveBoolean(string s) {
    bool result = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') {
            result = true;
            break;
        } else if (s[i] == 'f') {
            return "False";
        } else if (s[i] == '&') {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == 't') {
                    result = true;
                    break;
                } else if (s[j] == 'f') {
                    return "False";
                }
            }
        } else if (s[i] == '|') {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == 't') {
                    result = true;
                    break;
                } else if (s[j] == 'f') {
                    return "False";
                }
            }
        }
    }
    return result ? "True" : "False";
}