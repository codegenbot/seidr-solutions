bool solveBoolean(const std::string& s) {
    bool result = true;
    int i = 0;

    while (i < s.length()) {
        if (s.at(i) == '&') {
            i++;
            while (i < s.length() && s.at(i) != '|') {
                if (s.at(i) != 'T') {
                    result = false;
                    break;
                }
                i++;
            }
        } else if (s.at(i) == '|') {
            i++;
            while (i < s.length() && s.at(i) != '&') {
                if (s.at(i) != 'T') {
                    result = true;
                    break;
                }
                i++;
            }
        } else {
            result = (s.at(i) == 'T');
            i++;
        }
    }

    return result;
}