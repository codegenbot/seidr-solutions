```cpp
bool solveBoolean(std::string s) {
    bool result = true;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == 'F') {
            return false;
        } else if (s[i] == '|') {
            if (i == s.size() - 1 || s[i + 1] == 'F') {
                return true;
            }
            i++;
        } else if (s[i] == '&') {
            bool foundT = false;
            while (i < s.size()) {
                if (s[i] == 'T') {
                    foundT = true;
                    break;
                } else if (s[i] == 'F') {
                    return false;
                }
                i++;
            }
            result = foundT;
        }
        i++;
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