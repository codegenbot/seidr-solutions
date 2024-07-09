bool solveBoolean(const std::string& s) {
    bool result = true;
    size_t i = 0;

    while (i < s.size()) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '|') {
            bool temp = result;
            i++;
            while (i < s.size() && s[i] != '|') {
                if (s[i] == '&') {
                    i++;
                    while (i < s.size() && s[i] != '|') {
                        if (s[i] == 'T') {
                            result = temp;
                        } else {
                            result = !temp;
                        }
                        i++;
                    }
                } else {
                    if (s[i] == 'T') {
                        result = temp;
                    } else {
                        result = !temp;
                    }
                    i++;
                }
            }
        } else if (s[i] == '&') {
            bool temp = result;
            i++;
            while (i < s.size() && s[i] != '&') {
                if (s[i] == 'T') {
                    result = temp;
                } else {
                    result = !temp;
                }
                i++;
            }
        }
        i++;
    }
    return result;
}