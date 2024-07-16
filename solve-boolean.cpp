#include <string>
bool solveBoolean(const std::string& s) {
    bool result = true;
    for (const auto& c : s) {  
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '|') {
            result = !result;
        } else if (c == '&') {
            while (true) {
                if (!result) return false;
                if (s.find(c) == std::string::npos) break;
                c = s[s.find(c) + 1];
            }
        }
    }
    return result;