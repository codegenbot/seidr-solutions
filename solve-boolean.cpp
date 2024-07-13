```cpp
bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '|') {
            bool temp = !result;
            while (i + 1 < s.length() && s[i + 1] != '&' && s[i + 1] != ')') {
                i++;
            }
        } else if (s[i] == '&') {
            while (i + 1 < s.length() && s[i + 1] != '(') {
                i++;
            }
        }
    }
    return result;
}