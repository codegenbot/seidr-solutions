bool solveBoolean(string s) {
    bool result = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') {
            result = true;
            break;
        }
        else if (s[i] == 'f') {
            return false;
        }
        else if (s[i] == '&') {
            if (i+1 < s.length() && s[i+1] == '&') {
                i++;
            } 
        }
        else if (s[i] == '|') {
            if (i+1 < s.length() && s[i+1] == '|') {
                i++;
            } 
        }
    }
    return result;
}