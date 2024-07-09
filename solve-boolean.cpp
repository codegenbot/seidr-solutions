#include <string>

void processBar(string s, int& i, bool& result) {
    while (i < s.size()) {
        switch (s[i]) {
            case 'T':
                return;
            case 'F':
                i++;  
                result = false;
                return;
            case '|':
                if (s[i+1] == '&') {
                    i++;
                    while (i < s.size() && s[i] != '&' && s[i] != '|') i++;
                    i++;
                } else {
                    while (i < s.size() && s[i] != '|' && s[i] != '&') i++;
                }
                break;
            case '&':
                if (s[i+1] == 'T') {
                    i++;
                    while (i < s.size() && s[i] != 'T' && s[i] != 'F' && s[i] != '&') i++;
                    result = true;
                } else if (s[i+1] == 'F') {
                    i++;
                    while (i < s.size() && s[i] != 'T' && s[i] != 'F' && s[i] != '&') i++;
                    result = false;
                }
                break;
            default:
                return true;
        }
    }
    return true;
}