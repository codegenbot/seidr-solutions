bool solveBoolean(const std::string& s) {
    if (s.empty()) return false; 
    bool result = true;
    for (int i = 0; i < s.length(); ++i) {
        char c = s[i]; // store current character in 'c'
        if (c == 'T') {
            result = true; 
        } else if (c == 'F') {
            result = false;
        } else if (c == '|') { 
            bool temp = result;
            result = true;
            for (; i < s.length() && s[i] != '&'; ++i) {}
            result = result && temp;
        } else if (c == '&') { 
            bool temp = result;
            result = true;
            for (; i < s.length() && s[i] != '|'; ++i) {}
            result = result && temp;
        }
    }
    return result;
}