bool solveBoolean(const std::string& s) {
    if (s.empty()) return true;
    if (s == "T") return true;
    if (s == "F") return false;

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
        i++;
    }

    size_t left_end = std::count(s.begin(), s.end(), '|');
    std::string left = s.substr(0, left_end);
    size_t right_start = s.find('|', left_end + 1);

    if (right_start == std::string::npos) {
        if (left == "t") result = true;
        else if (left == "f") result = false;
    } 
    else {
        std::string right = s.substr(left_end + 1, right_start - left_end - 1);
        if (right == "t" || right == "") return result;
        else if (right == "f") return !result && solveBoolean(right);

        if (s[left_end] == '|') {
            return solveBoolean(left) || solveBoolean(right.c_str());
        } 
        else {
            return solveBoolean(left) && solveBoolean(right.c_str());
        }
    }

    return result;
}