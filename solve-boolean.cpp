bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'F') return false;
        else if (s[i] == '|') {
            while(i + 1 < s.size() && s[i+1] != '&')i++;
        }
        else if (s[i] == '&') {
            while(i + 1 < s.size() && s[i+1] != '|')i++;
        }
    }
    return result;
}