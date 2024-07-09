```cpp
bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'F') {
            return false;
        } else if (s[i] == '|') {
            if (i == s.size() - 1 || s[i + 1] == 'F')
                return false;
            i++;
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'T' || s[i] == '|') continue;
        if (s[i] == '&') {
            if (i == s.size() - 1 || s[i + 1] == 'F')
                return false;
            i++;
        }
    }
    return result;
}