bool solveBoolean(const std::string& s) {
    if (s.empty()) return false;

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
            while (i + 1 < s.size() && s[i+1] == '|') i++;
        } else if (s[i] == '&') {
            bool temp = result;
            while (i + 1 < s.size() && s[i+1] == '&') i++;
            result &= temp;
        }
    }
    return result;