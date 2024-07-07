#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    for (char c : s) {
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '&') {
            while (!result && s.size() > 1 && s.back() == '&') {
                s.pop_back();
            }
        } else if (c == '|') {
            while (!result && s.size() > 1 && s.back() == '|') {
                s.pop_back();
            }
        } else {
            int i = s.find('|');
            if (i != string::npos) {
                bool left = true;
                bool right = true;
                if (s[i - 1] == 'F')
                    left = false;
                if (s[i + 1] == 'F')
                    right = false;
                result = left && right ? true : false;
            }
        }
    }
    return result;