bool solveBoolean(const std::string& s) {
    bool result = true;
    for (auto c : s) {  
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '|') {
            result = !result;
        } else if (c == '&') {
            auto temp = 0;
            for (++s.begin(); s.begin() + temp != s.end() && s[temp] != '&'; ++temp) {
                if (s[temp] == 'T')
                    continue;
                result = false;
            }
        }
    }
    return result;
}