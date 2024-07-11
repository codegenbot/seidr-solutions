```cpp
#include <string>
#include <iostream>

int main() {
    std::string cipherMap, input;
    std::cout << "Enter cipher map: ";
    std::getline(std::cin, cipherMap);
    std::cout << "Enter message to decipher: ";
    std::getline(std::cin, input);
    
    std::cout << "Deciphered message: " << substitutionCipher(cipherMap, input) << std::endl;

    return 0;
}

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