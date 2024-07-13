string solveBoolean(string s) {
    bool result = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') {
            result = true;
        } else if (s[i] == 'f') {
            return "False";
        } else if (s[i] == '|') {
            if (!result) {
                for (int j = i + 1; j < s.length(); j++) {
                    if (s[j] == 't') {
                        result = true;
                        break;
                    } else if (s[j] == 'f') {
                        return "False";
                    }
                }
            }
        } else if (s[i] == '&') {
            bool temp = false;
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == 't') {
                    temp = true;
                } else if (s[j] == 'f') {
                    return "False";
                }
            }
            result &= temp;
        }
    }
    return result ? "True" : "False";
}