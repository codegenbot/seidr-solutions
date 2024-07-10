#include <iostream>
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
                for (; i < s.size() && s[i] != '&'; i++) {
                    if (s[i] == 'F')
                        subResult = false;
                }
                result = subResult;
                break; }
            case '&': {
                bool subResult = true;
                int j = 0; // added counter for '&' operands
                while (i < s.size() && s[i] == '&') {
                    i++;
                    j++;
                }
                for (; i < s.size(); i++) {
                    if (s[i] != 'T' && s[i] != 'F')
                        return false;
                    if ((j % 2) != 0)
                        subResult = false; // update condition
                    j++;
                }
                result = subResult;
                break; }
        }
    }
    return result;
}

int main() {
    std::cout << solveBoolean("T|F&F") << std::endl;
    std::cout << solveBoolean("f&f|f&f|f|f&f&f&f|t|f|t|f&f&f&f&f|f&t");
    return 0;
}