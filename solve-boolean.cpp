``` 
#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    int i = 0;
    bool result = false;
    while (i < s.length()) {
        if (s[i] == 'T') result = true;
        else if (s[i] == 'F') result = false;
        else if (s[i] == '|') {
            bool temp = result;
            while (result && i + 1 < s.length() && s[i + 1] != '|') i++;
            result = temp || (i < s.length());
        }
        else if (s[i] == '&') {
            bool temp = result;
            while (result && i + 1 < s.length() && s[i + 1] != '&') i++;
            result = temp && (i < s.length());
        }
        i++;
    }
    return result;
}