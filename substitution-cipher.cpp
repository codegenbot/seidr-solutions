```cpp
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipherMap, const std::string& input) {
    std::string output;
    for (char c : input) {
        char newChar = '\0';
        if (c >= 'a' && c <= 'z') {
            int index = tolower(c) - 'a';
            newChar = cipherMap[index];
        } else if (c >= 'A' && c <= 'Z') {
            int index = toupper(c) - 'A';
            newChar = toupper(cipherMap[index] - ('A' - 'a'));
        }
        output += (newChar == '\0') ? c : newChar;
    }
    return output;
}

int main() {
    std::string cipherMap, input;
    std::cout << "Enter the cipher map: ";
    std::getline(std::cin, cipherMap);
    std::cout << "Enter the message to be deciphered: ";
    std::getline(std::cin, input);
    std::string output = substitutionCipher(cipherMap, input);
    std::cout << "Deciphered message: " << output << std::endl;
    return 0;
}