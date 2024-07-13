bool solveBoolean(const std::string& s) {
    if (s.empty()) return false;

    bool result = true;
    int i = 0;
    while (i < s.size()) {
        if (s.at(i) == 'T') {
            result = true;
            i++;
        } else if (s.at(i) == 'F') {
            result = false;
            i++;
        } else if (s.at(i) == '|') {
            bool temp = result;
            result = !result;
            while (++i < s.size() && s.at(i) == '|');
        } else if (s.at(i) == '&') {
            bool temp = result;
            while ((++i) < s.size() && s.at(i) == '&');
            result &= temp;
        }
    }
    return result;
}