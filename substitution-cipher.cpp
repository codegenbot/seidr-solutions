#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& input) {
    std::string result;
    for (char c : input) {
        if (c == '\0') break; // check for null-terminator
        size_t pos = cipher2.find(std::tolower(c));
        if (pos != std::string::npos) {
            result += std::tolower(cipher1.at(pos)); // substitute with corresponding character in cipher1, also converted to lowercase
        } else {
            result += c; // if not found, add as it is
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, input;
    std::cin >> cipher1 >> cipher2 >> input;
    std::cout << substitutionCipher(cipher1, cipher2, input) << std::endl;
    return 0;
}