#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.size(); i++) {
        switch (s[i]) {
            case 'T':
                break;
            case 'F':
                if (result)
                    result = false;
                else
                    return false;
                break;
            case '|':
                result = true;
                break;
            case '&':
                return result;
        }
    }
    return result;
}