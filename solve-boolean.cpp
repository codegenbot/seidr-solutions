#include <string>
#include <iostream>
#include <algorithm>

bool solveBoolean(std::string s) {
    size_t left_end = 0;
    while (left_end < s.size()) {
        if (s[left_end] == '(') {
            size_t right_start = ++left_end;
            size_t right_end = s.find(')', left_end);
            bool left = solveBoolean(s.substr(left_end, right_end - left_end));
            left_end = right_end + 1;
            if (s[left_end-1] == '&') {
                return left && solveBoolean(s.substr(left_end));
            } else {
                return left || solveBoolean(s.substr(left_end));
            }
        } else if (s.find("TF", left_end) != std::string::npos) {
            size_t right_start = ++left_end;
            while (right_start < s.size() && (s[right_start] == '&' || s[right_start] == '|')) {
                ++right_start;
            }
            bool left = s.substr(left_end - 1, 1) != 'F';
            bool right = solveBoolean(s.substr(right_start));
            return ((s[left_end-2] == '&') ? (left && right) : (left || right));
        } else {
            ++left_end;
        }
    }
    return s[0] == 'T';
}

int main() {
    std::string s = "t|t|f&f|t|t";
    bool result = solveBoolean(s);
    std::cout << (result ? "True" : "False") << std::endl;
    return 0;
}