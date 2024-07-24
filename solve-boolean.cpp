#include <iostream>
#include <string>
#include <algorithm>

bool solveBoolean(const std::string& s, size_t& i) {
    if (i >= s.length()) return s.empty() ? true : false;

    bool result = true;
    while (i < s.length() && s[i] != '|' && s[i] != '&') {
        i++;
    }

    if (s[i] == '|') {
        i++;
        if (s[i] == '&') i++;
        else break;
    } else if (s[i] == '&') {
        while (i + 1 < s.length() && s[i+1] == '&') i++;
        break;
    }

    size_t left_end = std::count(s.begin(), s.end(), '|');
    std::string left = s.substr(0, left_end);
    std::string right = s.substr(left_end + 1);

    if (left == "t") result = true;
    else if (left == "f") result = false;

    if (right == "t" || right == "") return result;
    else if (right == "f") return !result && solveBoolean(right, i - left_end - 1);

    i++;

    if (s[i] == '|') {
        return solveBoolean(left.c_str(), 0) || solveBoolean(right.c_str(), i);
    } else {
        return solveBoolean(left.c_str(), 0) && solveBoolean(right.c_str(), i);
    }
}

int main() {
    std::string input;
    while(true) {
        std::cout << "Enter a Boolean expression: ";
        std::getline(std::cin, input);
        if(input == "t" || input == "f") break;
        bool result = solveBoolean(input, 0);
        if (result) std::cout << "True" << std::endl;
        else std::cout << "False" << std::endl;
    }
    return 0;
}