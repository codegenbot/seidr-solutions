bool solveBoolean(const std::string& s) {
    bool result = true;
    for (char c : s) {  
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '|') {
            result = !result;
        } else if (c == '&') {
            if (!result) return false;
        }
    }
    return result;