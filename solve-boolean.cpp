#include <iostream>
#include <string>
#include <algorithm>

bool solveBoolean(const std::string& s) {
    if (s.empty()) return true;

    bool result = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '|') {
            if (s[i+1] == '&') i++;
            else break;
        } 
        else if (s[i] == '&') {
            while (i + 1 < s.length() && s[i+1] == '&') i++;
            break;
        }
        i++;
    }

    size_t left_end = std::count(s.begin(), s.end(), '|');
    std::string left = s.substr(0, left_end);
    std::string right = s.substr(left_end + 1);

    if (left == "t") result = true;
    else if (left == "f") result = false;

    if (right == "t" || right == "") return result;
    else if (right == "f") return !result && solveBoolean(right);

    if (s[i] == '|') {
        return solveBoolean(left) || solveBoolean(right);
    } 
    else {
        return solveBoolean(left) && solveBoolean(right);
    }
}

int main() {
    std::string input;
    while(true) {
        std::cout << "Enter a Boolean expression: ";
        std::getline(std::cin, input);
        if(input == "t" || input == "f") break;
        for(char c : input) {
            if(c != 'T' && c != 'F' && c != '|' && c != '&') {
                std::cout << "Invalid input. Please enter a valid Boolean expression." << std::endl;
                std::cout << "Enter a Boolean expression: ";
                std::getline(std::cin, input);
            }
        }
        bool result = solveBoolean(input);
        if (result) std::cout << "True" << std::endl;
        else std::cout << "False" << std::endl;
    }
    return 0;
}