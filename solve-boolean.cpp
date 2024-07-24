```cpp
#include <sstream>

bool solveBoolean(string s) {
    bool result = true;
    for (char c : s) {
        if (c == '|') {
            result = !result;
        } else if (c == '&') {
            while (s.find('&', i + 1) != string::npos) i++;
            if (i + 1 < s.length() && s[i+1] == 't') result = true;
            else if (i + 1 < s.length()) result = false;
        } else if (c == 'f' || c == 't') {
            if (result) return c == 't';
            else return c == 'f';
        }
    }
    if (s.find('t') != string::npos && s.find('f') != string::npos) {
        cout << "Error: Both true and false are present in the expression." << endl;
        return false;
    } else {
        return result;
    }
}