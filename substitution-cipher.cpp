#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& input) {
    std::string result;
    for (char c : input) {
        if (c == '\0') {
            break; // if the end of string is reached
        }
        size_t pos = cipher2.find(std::tolower(c)); // convert to lowercase
        if (pos != std::string::npos) {
            result += cipher1[pos]; // substitute with corresponding character in cipher1, also converted to lowercase
        } else {
            if(std::isupper(c)) {
                result += std::toupper(c); // if not found and it is uppercase, add as it is
            } else {
                result += c; // if not found and it is lowercase, add as it is
            }
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, input;
    std::getline(std::cin, cipher1);
    std::cin >> std::ws;
    std::cin >> cipher2;
    std::cin >> std::ws;
    std::getline(std::cin, input);
    std::cout << substitutionCipher(cipher1, cipher2, input) << std::endl;
    return 0;
}