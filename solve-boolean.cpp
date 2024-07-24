bool solveBoolean(std::string s) {
    size_t left_end = std::distance(s.begin(), std::find_first_of(s, "TF"));
    if (left_end == s.length()) {
        return s[0] == 'T';
    } else {
        bool left = s.substr(0, left_end).back() == 'T';
        size_t right_start = left_end;
        size_t right_end = std::distance(s.begin(), std::find_first_of(s, "TF"));
        if (right_end == s.length()) {
            return s[0] == 'T' ? !left : left;
        } else {
            bool right = s.substr(right_start, right_end - right_start).back() == 'T';
            return (s[left_end-1] == '&') ? (left && right) : (left || right);
        }
    }
}