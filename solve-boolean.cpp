```cpp
#include <sstream>

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '|') {
            result = !result;
        } else if (s[i] == '&') {
            while (i + 1 < s.length() && s[i+1] == '&') i++;
            if (i + 1 < s.length() && s[i+1] == 't') result = true;
            else if (i + 1 < s.length()) result = false;
        } else if (s[i] == 'f' || s[i] == 't') {
            if (result) return s[i] == 't';
            else return s[i] == 'f';
        }
    }
    return result;
}