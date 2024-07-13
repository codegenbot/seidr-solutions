bool solveBoolean(const std::string& s) {
    if (!std::all_of(s.begin(), s.end(), ::isdigit)) {  
        for (char c : s) {  
            if (c == 'T' || c == 'F' || c == '&' || c == '|') {
                return true;  
            }
        }
    }  

    bool result = true;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == 'T') {
            result = true;
            i++;
        } else if (s[i] == 'F') {
            result = false;
            i++;
        } else if (s[i] == '|') {
            bool temp = result;
            result = !result;
            while (i < s.size() && s[i] == '|') i++;
        } else if (s[i] == '&') {
            bool temp = true;  
            while (i < s.size() && s[i] == '&') i++;
            result &= temp;  
        }
    }
    return result;
}