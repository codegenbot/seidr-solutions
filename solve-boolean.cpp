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
            case '|':
                i++;
                result = true;
                while (i < s.size() && s[i] == '|') {
                    i++;
                }
                break;
            case '&':
                i++;
                if (!result) {
                    while (i < s.size() && s[i] == '&') {
                        i++;
                    }
                    return false;
                } else {
                    while (i < s.size() && s[i] == '&') {
                        i++;
                    }
                    result = true;
                }
                break;
        }
    }
    return result;
}

int main() {
    std::cout << solveBoolean("T|F&F") << std::endl;
    return 0;
}