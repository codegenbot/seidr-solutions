#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    int i = 0;

    while (i < s.length()) {
        if (s[i] == 'T') {
            i++;
        } else if (s[i] == 'F') {
            i++;
        } else if (s[i] == '&') {
            i++;
            if (s[i] == '&') {
                result &= true;
                i++;
            } else {
                while(i<s.length() && s[i] != '|') {
                    if(s[i]=='T') result = false; 
                    else i++;
                    i++;
                }
            }
        } else if (s[i] == '|') {
            i++;
            if (s[i] == '|') {
                result |= true;
                i++;
            } else {
                while(i<s.length() && s[i] != '&') {
                    if(s[i]=='F') result = false; 
                    else i++;
                    i++;
                }
            }
        }
    }

    return result;
}