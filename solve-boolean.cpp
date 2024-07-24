#include <string>
#include <iostream>
#include <algorithm>

bool solveBoolean(std::string s) {
    size_t left_end = s.find_first_of("TF");
    if (left_end == std::string::npos) {
        return s[0] == 'T';
    } else {
        bool left = s.substr(0, left_end).back() == 'T';
        size_t right_start = (left_end == std::string::npos) ? 0 : left_end + 1;
        size_t right_end = s.find_first_of("TF", right_start);
        if (right_end == std::string::npos) {
            return s[0] == 'T' ? !left : left;
        } else {
            bool right = s.substr(right_start, right_end - right_start).back() == 'T';
            return (s[left_end-1] == '&') ? (left && right) : (left || right);
        }
    }
}

int main() {
    std::string s = "T&F|T";
    bool result = solveBoolean(s);
    std::cout << result << std::endl;
    return 0;
}