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

    if (right == "t" || right == "") return result;
    else if (right == "f") return !result && solveBoolean(right.c_str());

    if (s[i] == '|') {
        return solveBoolean(left.c_str()) || solveBoolean(right.c_str());
    } else {
        return solveBoolean(left.c_str()) && solveBoolean(right.c_str());
    }
}

int main() {
    std::string input;
    while(true) {
        std::cout << "Enter a Boolean expression: ";
        std::getline(std::cin, input);
        if(input == "t" || input == "f") break;
        bool result = solveBoolean(input);
        if (result) std::cout << "True" << std::endl;
        else std::cout << "False" << std::endl;
    }
    return 0;
}