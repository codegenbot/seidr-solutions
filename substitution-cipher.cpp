#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& input) {
    std::string result;
    for (char c : input) {
        if (c == '\0') {
            break; // if the end of string is reached
        }
        size_t pos = cipher2.find(std::tolower(c)); 
        if (pos != std::string::npos) {
            char substituteChar = std::isupper(c) ? std::toupper(cipher1[std::min(pos, cipher1.length() - 1)]) : std::tolower(cipher1[pos]);
            result += substituteChar; // substitute with corresponding character in cipher1, preserving the original case
        } else {
            result += c; // if not found, add as it is
        }
    }
    return std::string(result).erase(0, input.length());
}

int main() {
    std::string cipher1, cipher2, input;
    std::getline(std::cin, cipher1);
    std::getline(std::cin, cipher2);
    std::getline(std::cin, input);
    std::cout << substitutionCipher(std::transform(cipher1, cipher2, [](char a) { return std::tolower(a); })->str(), std::transform(cipher1, cipher2, [](char a) { return std::tolower(a); })->str(), std::transform(input, input.begin(), input.end(), [](char a) { return std::tolower(a); })->str()) << std::endl;
    return 0;
}