#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& input) {
    std::string result;
    for (char c : input) {
        if (c == '\0') {
            break; 
        }
        size_t pos = cipher2.find(std::tolower(c)); // convert to lowercase
        if (pos != std::string::npos) {
            char originalCase = std::isupper(c) ? std::toupper(cipher1[pos]) : std::tolower(cipher1[pos]);
            result += originalCase; // substitute with the corresponding character in cipher1, preserving the original case
        } else {
            result += c; // if not found, add as it is
        }
    }
    return std::string(result).erase(0, input.length());
}

int main() {
    std::string cipher1, cipher2, input;
    std::cin >> '\n'; 
    std::getline(std::cin, cipher1);
    std::getline(std::cin, cipher2);
    std::getline(std::cin, input);
    std::cout << substitutionCipher(std::tolower(cipher1), std::tolower(cipher2), std::tolower(input)) << std::endl;
    return 0;
}