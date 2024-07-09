bool solveBoolean(const std::string& s) {
    bool result = true;
    int i = 0;

    while (i < s.length()) {
        if (s[i] == '&') {
            i++;
            if (s.substr(i, 1) == "T") {
                result &= (s.substr(i, 1) == "T");
                i++;
            } else if (s[i] == '|') {
                result = false;
                break;
            } else {
                result &= (s.substr(i, 1) == "T");
                i++;
            }
        } else if (s[i] == '|') {
            i++;
            if (s.substr(i, 1) == "|") {
                result |= (s.substr(i + 1, 1) == "T");
                i += 2;
            } else if (s[i] == '&') {
                break;
            } else {
                result |= (s.substr(i, 1) == "T");
                i++;
            }
        } else {
            result = (s.substr(i, 1) == "T");
            i++;
        }
    }

    return result;