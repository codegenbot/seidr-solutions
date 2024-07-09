#include <string>
#include <iostream>

bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'F') {
            return false;
        } else if (s[i] == '|') {
            bool left = i == 0 || solveBoolean(s.substr(0, i));
            int j = i + 1;
            while (j < s.size() && (s[j] == '&' || s[j] == '|')) {
                j++;
            }
            if (j < s.size()) {
                bool right = solveBoolean(s.substr(i + 1, j - i - 1));
                return left || right;
            } else {
                return left;
            }
        } else if (s[i] == '&') {
            bool foundT = false;
            for (int j = i; j < s.size(); j++) {
                if (s[j] == 'T') {
                    foundT = true;
                    break;
                } else if (s[j] == 'F') {
                    return false;
                }
            }
            result = foundT;
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