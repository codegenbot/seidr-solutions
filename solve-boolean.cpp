bool solveBoolean(const std::string& s) {
    if (s.empty()) return true;

    bool result = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '|') {
            if (s[i+1] == '|') i++;
            else break;
        } 
        else if (s[i] == '&') {
            while (i + 1 < s.length() && s[i+1] == '&') i++;
            break;
        }
        else if ((s[i] == 'T' || s[i] == 'F')) {
            break;
        }
        i++;
    }

    size_t left_end = std::count(s.begin(), s.end(), '|');
    std::string left = s.substr(0, left_end);
    size_t right_start = s.find('|', left_end + 1);

    if (right_start == std::string::npos) {
        if (left == "T") result = true;
        else if (left == "F") result = false;
    } 
    else {
        std::string right = s.substr(left_end + 1, right_start - left_end - 1);
        if (right == "T" || right == "") return result;
        else if (right == "F") return !result && solveBoolean(right);

        if (s[left_end] == '|') {
            return solveBoolean(left) || solveBoolean(right);
        } 
        else {
            return solveBoolean(left) && solveBoolean(right);
        }
    }

    return result;
}