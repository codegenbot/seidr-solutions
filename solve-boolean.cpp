#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    int i = 0;
    while (i < s.size()) {
        switch (s[i]) {
            case 'T':
                i++;
                break;
            case 'F':
                if (result)
                    result = false;
                else
                    return false;
                i++;
                break;
            case '|': {
                bool subResult = true;
                while (i < s.size() && s[i] == '|') {
                    i++;
                }
                for (; i < s.size(); ) {
                    if (s[i] == 'F')
                        subResult = false;
                    else if (s[i] != '&')
                        return false; // invalid expression
                    i++;
                    while (i < s.size() && s[i] == '&') {
                        i++;
                    }
                }
                result = subResult;
                break; }
            case '&': {
                bool subResult = true;
                int j = 0;
                for (; i < s.size(); ) {
                    if (s[i] != 'T' && s[i] != 'F')
                        return false; // invalid expression
                    if ((j % 2) != 0)
                        subResult = false; 
                    i++;
                    while (i < s.size() && s[i] == '&') {
                        i++;
                    }
                }
                result = subResult;
                break; }
        }
    }
    return result;
}