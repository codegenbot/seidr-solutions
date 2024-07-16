bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (i + 1 < s.length() && s[i+1] == '&') {
                i++;
            }
            if (i + 1 >= s.length() || s[i+1] == '|') {
                result = false;
                break;
            }
        } else if (s[i] == '|') {
            while (i + 1 < s.length() && s[i+1] == '|') {
                i++;
            }
            if (i + 1 >= s.length()) {
                return true;
            }
            result = false;
        } else {
            result = (s[i] == 'T');
        }
    }
    return result;
}