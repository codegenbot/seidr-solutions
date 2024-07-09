```cpp
bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'F') {
            return false;
        } else if (s[i] == '|') {
            if (i == s.size() - 1 || s[i + 1] == '&') {
                return true;
            } else if (s[i + 1] == 'F' || s.find('T', i + 2) != std::string::npos) {
                return true;
            }
            i++;
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