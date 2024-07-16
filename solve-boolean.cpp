#include <string>
bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '&') {
            bool temp = result;
            while(i + 1 < s.size() && s[i+1] != '&' && s[i+1] != '|') {
                i++;
                if (s[i] == 'T') {
                    result = false;
                } else if (s[i] == 'F') {
                    return temp;
                }
            }
        } else if (s[i] == '|') {
            bool temp = result;
            while(i + 1 < s.size() && s[i+1] != '&' && s[i+1] != '|') {
                i++;
                if (s[i] == 'T') {
                    result = true;
                } else if (s[i] == 'F') {
                    return temp;
                }
            }
        }
    }
    return result;
}