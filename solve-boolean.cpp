bool solveBoolean(const std::string& s) {
    if (s.empty()) return false;

    bool result = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '|') {
            bool temp = result;
            result = !result;
            while (i + 1 < s.size() && s.substr(i+1, 1) == "|") i++;
        } else if (s[i] == '&') {
            bool temp = result;
            while (i + 1 < s.size() && s.substr(i+1, 1) == "&") i++;
            result &= temp;
        }
    }
    return result;