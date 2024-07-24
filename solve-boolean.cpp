```cpp
#include <string>
#include <vector>

bool solveBoolean(const std::string& s) {
    if (s.empty()) return true;

    bool result = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '|') {
            if (s[i+1] == '&') i++;
            else break;
        } else if (s[i] == '&') {
            while (i + 1 < s.length() && s[i+1] == '&') i++;
            break;
        }
        i++;
    }

    std::string left = s.substr(0, i);
    std::string right = s.substr(i);

    if (left == "t") result = true;
    else if (left == "f") result = false;

    if (right == "t") return result || solveBoolean(right);
    else if (right == "f") return !result && solveBoolean(right);

    if (s[i] == '|') {
        return solveBoolean(left) || solveBoolean(right);
    } else {
        return solveBoolean(left) && solveBoolean(right);
    }
}

int main() {
    std::string input;
    std::cout << "Enter a Boolean expression: ";
    std::getline(std::cin, input);
    bool result = solveBoolean(input);
    if (result) std::cout << "True" << std::endl;
    else std::cout << "False" << std::endl;
    return 0;
}