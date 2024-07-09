bool solveBoolean(const std::string& s) {
    bool result = true;
    size_t i = 0;

    while (i < s.size()) {
        if (s.substr(i, 1)[0] == '&') {
            i++;
            while (i < s.size() && s.substr(i, 1)[0] != '|') {
                if (s.substr(i, 1)[0] != 'T') {
                    result = false;
                    break;
                }
                i++;
            }
        } else if (s.substr(i, 1)[0] == '|') {
            i++;
            while (i < s.size() && s.substr(i, 1)[0] != '&') {
                if (s.substr(i, 1)[0] != 'T') {
                    result = true;
                    break;
                }
                i++;
            }
        } else {
            result = (s.substr(i, 1)[0] == 'T');
            i++;
        }
    }

    return result;
}