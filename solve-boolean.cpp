bool solveBoolean(std::string s) {
    bool result = true;
    int i = 0;
    
    while (i < s.length()) {
        if (s[i] == 'F') {
            result = false;
            break;
        } else if (s[i] == '|') {
            i++;
            if (i >= s.length() || s[i] == 'F') {
                return true;
            }
        } else if (s[i] == '&') {
            i++;
            while (i < s.length() && s[i] != '|') {
                if (s[i] == 'T') {
                    break;
                } else {
                    result = false;
                }
                i++;
            }
        }
    }
    
    return result;
}