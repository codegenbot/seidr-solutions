bool solveBoolean(const std::string& s) {
    if (s.empty()) return false;

    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '|') {
            bool temp = result;
            result = !result;
            while ((s.substr(i+1)).find('|') != std::string::npos) i++;
        } else if (s[i] == '&') {
            bool temp = result;
            while ((s.substr(i+1)).find('&') != std::string::npos) i++;
            result &= temp;
        }
    }
    return result;