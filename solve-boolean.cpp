#include <string>
#include <iostream>

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
                bool temp = true;
                while (i < s.size() && s[i] == '|') {
                    i++;
                }
                if (!temp) {
                    result = false;
                } else {
                    while (i < s.size() && s[i] == '&') {
                        i++;
                    }
                    if (!result) {
                        return false;
                    } else {
                        result = true;
                    }
                }
            } break;
            case '&': {
                bool temp = false;
                while (i < s.size() && s[i] == '&') {
                    i++;
                }
                if (!temp) {
                    if (result)
                        return false;
                    result = false;
                } else {
                    if (!result)
                        return false;
                    result = true;
                }
            } break;
        }
    }
    return result;
}

int main() {
    std::cout << solveBoolean("T|F&F") << std::endl;
    return 0;
}