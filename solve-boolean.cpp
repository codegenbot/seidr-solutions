bool solveBoolean(std::string s) {
    bool result = true;
    int i = 0;
    while (i < s.size()) {
        switch (s[i]) {
            case 'T':
                i++;
                break;
            case 'F':
                if (result)
                    result = false;
                else
                    return false;
                i++;
                break;
            case '|': {
                bool subResult = true;
                while (i < s.size() && s[i] == '|') {
                    i++;  // Fix: increment 'i' once inside the loop for '|'
                }
                for (; i < s.size() && s[i] != '&'; i++) {
                    if (s[i] == 'F')
                        subResult = false;
                }
                result = subResult;
                break; }
            case '&': {
                bool subResult = true;
                while (i < s.size() && s[i] == '&') {
                    i++;
                }
                for (; i < s.size(); i++) {
                    if (s[i] != 'T' && s[i] != 'F')
                        return false;  // Incorrect input
                    if (s[i] == 'F')
                        subResult = false;
                }
                result = subResult;
                break; }
        }
    }
    return result;
}