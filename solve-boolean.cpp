#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == 'F') {
            return false;
        } else if (s[i] == '|') {
            if (i == s.size() - 1 || (s[i + 1] == '&' && (i + 2 >= s.size() || s[i + 1] == 'F'))) {
                return true;
            } else if (i == s.size() - 1 || s[i + 1] == 'F') {
                return false;
            }
            i++;
        } else if (s[i] == '&') {
            bool foundT = false;
            for (; i < s.size(); i++) {
                if (s[i] == 'T') {
                    foundT = true;
                    break;
                } else if (s[i] == 'F') {
                    return false;
                }
            }
            result = foundT;
        } else if (s[i] == 'T' || s[i] == 'F') {
            i++;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    bool result = solveBoolean(input);
    std::cout << (result ? "True" : "False") << std::endl;
    return 0;
}