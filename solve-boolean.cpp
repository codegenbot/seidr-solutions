bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            char left = s[i - 1];
            char right = s[i + 1];
            i++;
            result = (left == 'T' && right == 'T');
        } else if (s[i] == '|') {
            char left = s[i - 1];
            char right = s[i + 1];
            i++;
            result = (left == 'T' || right == 'T');
        }
    }
    return result;
}