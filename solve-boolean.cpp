#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '|') {
            int j = i + 1;
            while (j < s.length() && s[j] != '&') j++;
            string sub = s.substr(i+1, j-i-1);
            result |= (sub == "T");
            i = j - 1;
        } else if (s[i] == 'F') {
            return false;
        }
    }
    return result;
}