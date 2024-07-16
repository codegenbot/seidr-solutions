bool solveBoolean(const std::string& s) {
    bool result = true;
    bool left = true;
    for (auto c : s) {  
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '|') {
            result = !result;
        } else if (c == '&') {
            left = result;
            result = false;
        }
    }
    return result;